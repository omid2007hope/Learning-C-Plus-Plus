#include <iostream>

bool loaded = false;
bool loading = false;

int limit = 20;
int notLoaded = 0;
const int alreadyLoaded = 0;

int main()
{

    do
    {
        loading = true;

        while (loading == true)
        {
            if (loaded == false && alreadyLoaded == 0)
            {
                while (notLoaded <= limit)
                {
                    ++notLoaded;
                    std::cout << "Product number: " << notLoaded << " loaded succesfully" << "\n\n";
                }
            }

            std::cout << "All 20 products loaded succesfully" << "\n\n";
            loading = false;
        };

        loaded = true;
    } while (loaded == false);

    return 0;
};
