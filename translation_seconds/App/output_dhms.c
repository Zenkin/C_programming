#include "output_dhms.h"

void output_dhms(struct Time_units output)
{
    if (output.days != 0)
    {
        printf("%ld ", output.days);
        if (output.days > 1)
        {
            printf("days ");
        }
        else
        {
            printf("day ");
        }
    }
    if (output.hours != 0)
    {
        printf("%ld ", output.hours);
        if (output.hours > 1)
        {
            printf("hours ");
        }
        else
        {
            printf("hour ");
        }
    }
    if (output.minutes != 0)
    {
        printf("%ld ", output.minutes);
        if (output.minutes > 1)
        {
            printf("minutes ");
        }
        else
        {
            printf("minute ");
        }
    }
    if (output.seconds > 0)
    {
        printf("%ld ", output.seconds);
        if ((output.seconds > 1)||(output.seconds < 1))
        {
            printf("seconds ");
        }
        else
        {
            printf("second ");
        }
    }
}
