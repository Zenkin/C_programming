#include "input_seconds.h"

const long int max_input_seconds = 31536000;

long int input_seconds()
{
    puts("Enter seconds(not more 31'536'000):");
    printf("Input seconds: ");
    long int input_seconds;
    while (true)
    {
        scanf("%ld", &input_seconds);
        if ((input_seconds > max_input_seconds) || (input_seconds < 0))
        {
            print_error();
        }
        else
        {
            break;
        }
    }
    return input_seconds;
}
