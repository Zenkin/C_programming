//ОПЕЧАТКА В НАЗВАНИИ ФАЙЛА

#include "convert_seconds.h"
#include "struct_count.h"

#define min 60 // seconds in minute
#define hour 3600 // seconds in hour
#define day 86400 // seconds in day

struct Count convert_seconds(long int seconds)
{
    struct Result result1;
    struct Count count_of;

    result1 = pick_out_days(seconds);
    if (result1.count == 0)
    {
        count_of.days = 0;
        seconds = result1.lost_seconds;
    }
    else
    {
        count_of.days = result1.count;
        seconds = result1.lost_seconds;
    }

    result1 = pick_out_hours(seconds);
    if (result1.count == 0)
    {
        count_of.hours = 0;
        seconds = result1.lost_seconds;
    }
    else
    {
        count_of.hours = result1.count;
        seconds = result1.lost_seconds;
    }

    result1 = pick_out_minutes(seconds);
    if (result1.count == 0)
    {
        count_of.minutes = 0;
        count_of.seconds = result1.lost_seconds;
    }
    else
    {
        count_of.minutes = result1.count;
        count_of.seconds = result1.lost_seconds;
    }

    return count_of;
}
