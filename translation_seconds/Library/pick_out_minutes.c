#include "pick_out_minutes.h"

struct Result pick_out_minutes(long int seconds)
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

