#include "pick_out_hours.h"

struct Result pick_out_hours(long int seconds)
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
