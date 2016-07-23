#include "convert_seconds.h"
#include "pick_out_dhms.h"

struct Time_units convert_seconds(long seconds)
{
    struct Time_units time_in_dhms;

    long days = pick_out_days(&seconds);
    time_in_dhms.days = days;
    
    long hours = pick_out_hours(&seconds);
    time_in_dhms.hours = hours;

    long minutes = pick_out_minutes(&seconds);
    time_in_dhms.minutes = minutes;

    time_in_dhms.seconds = seconds;

    return time_in_dhms;
}
