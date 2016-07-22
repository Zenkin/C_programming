#ifndef TIME_IN_DAYS_HOURS_MINUTES_SECONDS_H
#define TIME_IN_DAYS_HOURS_MINUTES_SECONDS_H

#ifdef __cplusplus
extern "C" {
#endif

struct Time_in_days_hours_minutes_seconds
{
    long days; // from 0 to 365 (ignore leap year)
    long hours; // from 0 to 24
    long minutes; // from 0 to 60
    long seconds; // from 0 to 60
};

#ifdef __cplusplus
}
#endif

#endif // TIME_IN_DAYS_HOURS_MINUTES_SECONDS_H
