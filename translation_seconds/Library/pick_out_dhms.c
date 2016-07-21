#include "pick_out_dhms.h"
#include <stdio.h>

const int seconds_in_day = 86400;
const int seconds_in_hour = 3600;
const int seconds_in_minutes = 60;

int pick_out_days(long seconds)
    {      
        if (seconds == 0)
        {
            return 0;
        }
        else
        {
            return seconds / seconds_in_day;
        }
    }

int pick_out_hours(long seconds)
    {
        if (seconds == 0)
        {
            return 0;
        }
        else
        {
            return seconds / seconds_in_hour;
        }
    }

int pick_out_minutes(long seconds)
    {
        if (seconds == 0)
        {
            return 0;
        }
        else
        {
            int minutes = seconds / seconds_in_minutes;
            if (minutes == 0)
            {
                return 0;
            }
            else
            {
                return minutes;
            }
        }
    }
