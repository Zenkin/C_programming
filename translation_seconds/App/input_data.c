#include "input_data.h"

long int input_data()
{
    long int seconds, max_seconds = 31540000;
    bool error = true;

    puts("Enter seconds(not more 31'540'000):");
    printf("Input seconds: ");
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

    if (seconds == 1)
    {
        printf("%ld second is ", seconds);
    }
    else
    {
        printf("%ld seconds is ", seconds);
    }
    return seconds;
}
