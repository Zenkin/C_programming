#ifndef STRUCT_TIME_IN_DHMS_H
#define STRUCT_TIME_IN_DHMS_H

#ifdef __cplusplus
extern "C" {
#endif

struct Time_in_dhms
{
    long days; // from 0 to 365 (ignore leap year)
    long hours; // from 0 to 24
    long minutes; // from 0 to 60
    long seconds; // from 0 to 60
};

#ifdef __cplusplus
}
#endif

#endif // STRUCT_TIME_IN_DHMS_H
