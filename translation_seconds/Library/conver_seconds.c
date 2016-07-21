#include "convert_seconds.h"
#include "struct_count.h"
#include <stdio.h>

const long seconds_in_one_min = 60;
const long seconds_in_one_hour = 3600;
const long seconds_in_one_day = 86400;

struct Time_in_days_hours_minutes_seconds convert_seconds(long seconds)
{
    struct Time_in_days_hours_minutes_seconds time_in_dhms;

    int days = pick_out_days(seconds);
    time_in_dhms.days = days;

    int hours = pick_out_hours(seconds - (days * seconds_in_one_day));
    time_in_dhms.hours = hours;

    int minutes = pick_out_minutes(seconds - (days * seconds_in_one_day) - (hours * seconds_in_one_hour));
    time_in_dhms.minutes = minutes;
    
    time_in_dhms.seconds = seconds - (days * seconds_in_one_day)
                           - (hours * seconds_in_one_hour)
                           - (minutes * seconds_in_one_min);

    return time_in_dhms;
}
