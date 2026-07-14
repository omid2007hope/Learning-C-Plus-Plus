# Echo — a speak-your-mind voice companion

You hold a button (or just talk), dump whatever is in your head out loud, and Echo turns raw rambling into **structured, cleaned, actionable output**.

```
Your voice → transcription (STT) → cleanup (grammar, filler, dedupe)
→ intent classification (task? note? reminder? idea?)
→ routing (tasks → to-do, ideas → notes, dates → reminders)
→ summary + it can talk back to you (TTS)
```

The "smart" part is the middle: it's not just a transcriber, it's a thinking layer that understands meaning and organizes it.

> Note: I won't give calendar estimates (weeks/months). Instead this README defines ordered versions with clear "done when" criteria.

---

## Tech decisions (decide these before V1)

- **This is a web/full-stack project, not a C++ one.** Use the right tool for each part.
- **STT:** start with the browser `Web Speech API`; upgrade to `Whisper` or `whisper.cpp` later.
- **TTS:** start with the browser `SpeechSynthesis` API; upgrade to a neural TTS later.
- **Cleanup + classification layer:** an LLM API call that performs grammar fixing, dedupe, and intent classification.
- **Stack:** Next.js frontend + Express + MongoDB (Mongoose) backend.

---

## V1 — "It hears me and cleans it up"

**Goal:** You talk, it transcribes, and it returns clean text.

Features:

- Push-to-talk in the browser with live transcription via `Web Speech API`.
- Send raw transcript to backend → one LLM call that: fixes grammar, removes filler words, and de-duplicates.
- Show raw vs cleaned text.
- Save sessions (raw + cleaned) to MongoDB.

Done when: a 30-second ramble is shown as a clean, grammatical, de-duplicated version.

---

## V2 — "It understands what I meant"

**Goal:** Auto-classify speech into `task`, `note`, `idea`, `reminder` and route accordingly.

Features:

- LLM classifies each sentence/point.
- Tasks append to a to-do list; notes are stored; summaries created.
- Date phrases are parsed into reminder timestamps.
- Dedupe across sessions.

Done when: a single utterance produces correct task/note/reminder extraction.

---

## V3 — "It talks back and remembers me"

**Goal:** Two-way companion with voice replies, reminders, and memory.

Features:

- TTS replies and confirmations.
- Reminders fire as browser notifications or email.
- Memory service for cross-session context.
- Roadmap-building and conversational follow-ups.

Done when: it replies by voice, reminders occur, and it summarizes progress.

---

## Architecture / layout

```
echo/
  frontend/            # Next.js — mic capture, live transcript, UI, TTS
    audio/
    features/
  backend/
    routes/ controllers/ services/ models/ ai/
    services/
      TranscriptService
      IntentService
      ReminderService
      MemoryService
  tests/
```

Keep the `ai/` brain isolated behind a service interface so you can swap LLM providers or run local models later.
