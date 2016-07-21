#include "pick_out_dhms.h"

// return count days in all seconds which served in the function
struct Result pick_out_days(long seconds)
    {
        long int day = 86400;
        struct Result result1;

        int int_part_day = seconds / day;
        if (int_part_day == 0)
        {
            result1.count = 0;
            result1.lost_seconds = seconds;
        }
        else
        {
            result1.count = int_part_day;
            result1.lost_seconds = seconds - (int_part_day * day);
        }
        return result1;
    }

// return count hours in all seconds which served in the function
struct Result pick_out_hours(long seconds)
    {
        long int hour = 3600;
        struct Result result1;

        int int_part_hour = seconds / hour;
        if (int_part_hour == 0)
        {
            result1.count = 0;
            result1.lost_seconds = seconds;
        }
        else
        {
            result1.count = int_part_hour;
            result1.lost_seconds = seconds - (int_part_hour * hour);
        }
        return result1;
    }

// return count minutes in all seconds which served in the function
struct Result pick_out_minutes(long seconds)
    {
        long int min = 60;
        struct Result result1;

        int int_part_min = seconds / min;
        if (int_part_min == 0)
        {
            result1.count = 0;
            result1.lost_seconds = seconds;
        }
        else
        {
            result1.count = int_part_min;
            result1.lost_seconds = seconds - (int_part_min * min);
        }
        return result1;
    }
