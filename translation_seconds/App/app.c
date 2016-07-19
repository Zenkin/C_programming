#include "app.h"

void input_data()
{
    long int seconds, max_seconds = 31540000;
    bool error = true;

    puts("Enter seconds(not more 31'540'000):");
    while (error)
    {
        scanf("%ld", &seconds);
        if ((seconds > max_seconds) || (seconds < 0))
        {
            print_error();
            error = true;
        }
        else
        {
            error = false;
        }
    }
}

void print_error()
{
    puts("Invalid values!");
    puts("Please, try again.");
}
