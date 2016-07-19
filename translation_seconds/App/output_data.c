#include "output_data.h"
#include "data_processing.h"

void output_data(struct Count output)
{
    struct Count data;
    data = output;
    //printf("%ld %ld %ld %ld", data.days, data.hours, data.minutes, data.seconds);
    if (data.days != 0)
    {
        printf("%ld ", data.days);
        if (data.days > 1)
        {
            printf("days ");
        }
        else
        {
            printf("day ");
        }
    }
    if (data.hours != 0)
    {
        printf("%ld ", data.hours);
        if (data.hours > 1)
        {
            printf("hours ");
        }
        else
        {
            printf("hour ");
        }
    }
    if (data.minutes != 0)
    {
        printf("%ld ", data.minutes);
        if (data.minutes > 1)
        {
            printf("minutes ");
        }
        else
        {
            printf("minute");
        }
    }
    if (data.seconds >= 0)
    {
        printf("%ld ", data.seconds);
        if ((data.seconds > 1)||(data.seconds < 1))
        {
            printf("seconds ");
        }
        else
        {
            printf("second ");
        }
    }
}
