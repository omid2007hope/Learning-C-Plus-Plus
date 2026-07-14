
# Aether — your own networked database engine

For a *totally new* project that hits Velora's scale and boldness, consider building **Aether**: a from-scratch, persistent, multi-client database engine written in C++ with its own on-disk format, small query language, network wire protocol, and a web dashboard. Think "a mini PostgreSQL/Redis you built yourself." 

## Why this project

- Systems-level, multi-layered architecture (not a toy).
- Exercises key C++ skills: pointers, manual memory, byte-level file I/O, concurrency, and data layout.
- Reuses web skills via the dashboard and wire protocol while keeping the core C++ challenges central.
- Highly impressive on a résumé: "I wrote a database engine."

> Note: I won't provide calendar estimates (weeks/months). Instead this README defines ordered phases with relative difficulty and clear "done" criteria. Attach your own timeline based on weekly availability.

---

## Guiding principle — vertical slices

Avoid scope creep by delivering working, end-to-end vertical slices. Each version below is a usable product that proves a specific set of concepts.

---

## V1 — "It stores and returns data"

**Goal:** Single-process, in-memory key-value store accessible over TCP.

Features:

- `SET key value`, `GET key`, `DEL key` over a raw TCP connection (test with `telnet` / `netcat`).
- In-memory store using `std::unordered_map<std::string, std::string>`.
- Single client is acceptable for V1.
- Simple line-based text protocol you design.

C++ concepts covered: `std::string`, `std::unordered_map`, references vs copies, RAII, basic sockets, parsing, and clear separation of responsibilities (`Server`, `Store`, `CommandParser`).

Done when: open a terminal, connect, `SET name omid`, `GET name` and receive `omid`.

---

## V2 — "It survives a restart" (persistence + concurrency)

**Goal:** Durable writes and multiple concurrent clients.

Features:

- Append-only log (WAL): append writes to disk and replay on startup.
- Snapshotting: compact the WAL periodically to limit growth.
- Multi-client concurrency: use `std::thread` (or a thread pool) and guard the store with `std::mutex` (or a read/write lock).
- Graceful shutdown that flushes state to disk.

C++ concepts covered: binary file I/O and serialization, `std::thread`, `std::mutex` / `std::lock_guard`, `std::unique_ptr`, and producer/consumer patterns.

Done when: restart the server and data persists correctly while multiple clients access it concurrently.

---

## V3 — "It's a real engine" (on-disk storage + query language)

**Goal:** Replace the in-memory map with an on-disk storage engine and add a tiny query language.

Features:

- On-disk B-tree (or LSM-tree): store fixed-size pages in a data file so data need not fit in RAM.
- Mini query language (mini-SQL): `CREATE`, `INSERT`, `SELECT ... WHERE` implemented with a hand-written lexer + parser.
- Indexes: add at least a secondary index to avoid full scans.
- Basic transactions: atomic multi-write commit/rollback using the WAL.

C++ concepts covered: manual page management, custom binary formats, templates/generics, operator overloading, lexer/parser construction, and careful offset arithmetic.

Done when: you can define a table, insert thousands of rows, and run an indexed `SELECT ... WHERE` that outperforms a full scan.

---

## Final version — "Velora-scale product"

**Goal:** A polished, observable networked database with a web dashboard.

Features:

- Custom binary wire protocol and a small client library (so Node.js/Next.js can talk to the engine).
- Web dashboard (Next.js): live stats, query console, throughput/latency graphs, key inspection.
- Observability: metrics (ops/sec, memory, disk), structured logging.
- Robustness: crash-recovery tests, benchmark suite, and a test harness.
- Stretch goals: replication, simple query planner, TTL/expiry, pluggable storage engines.

Done when: someone can `git clone`, run the system, connect via the web UI, run queries, kill a node, and observe recovery — with a README explaining the architecture.

---

## Architecture / module layout

```
aether/
  core/           # pure C++ engine, no networking (library)
    store/        # B-tree, pages, WAL, snapshot
    query/        # lexer, parser, executor
    txn/          # transactions
  net/            # TCP server, wire protocol
  server/         # thin main() that wires core + net together
  client/         # C++ client lib + optional Node.js binding
  dashboard/      # Next.js web UI
  tests/          # unit + integration + crash-recovery + benchmarks
```

Keep `core/` free of networking dependencies — engine as a testable library and a thin server on top.

---

## How to think about duration

Relative difficulty (low → high): **V1 → V2 → Final polish → V3**. V3 (B-tree + parser) is the hardest and deserves the most time. Do not start a version until the previous one is committed and runs end-to-end.

If you want, tell me your weekly hours and current C++ comfort and I will turn these phases into a milestone checklist with concrete first tasks for V1.
