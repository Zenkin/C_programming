#include "input_seconds.h"

const long int max_input_seconds = 31536000;

long int input_seconds()
{
    bool invalid_values = true;
    puts("Enter seconds(not more 31'536'000):");
    printf("Input seconds: ");
    long int input_seconds;
    while (invalid_values)
    {
        scanf("%ld", &input_seconds);
        if ((input_seconds > max_input_seconds) || (input_seconds < 0))
        {
            print_error();
            invalid_values = true;
        }
        else
        {
            invalid_values = false;
            break;
        }
    }
    return input_seconds;
}
