#include "pick_out_dhms.h"

const long seconds_in_one_min = 60;
const long seconds_in_one_hour = 3600;
const long seconds_in_one_day = 86400;

long pick_out_days(long *seconds)
{
    int days = *seconds / seconds_in_one_day;
    *seconds -= days * seconds_in_one_day;
    return days;
}

long pick_out_hours(long *seconds)
{
    int hours = *seconds / seconds_in_one_hour;
    *seconds -= hours * seconds_in_one_hour;
    return hours;
}

long pick_out_minutes(long *seconds)
{
    int minutes = *seconds / seconds_in_one_min;
    *seconds -= minutes * seconds_in_one_min;
    return minutes;
}
