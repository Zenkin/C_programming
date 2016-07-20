#ifndef STRUCT_COUNT_H
#define STRUCT_COUNT_H

#ifdef __cplusplus
extern "C" {
#endif

struct Count // count of days, hours, minutes and seconds
{
    long int days; // from 0 to 365 (ignore leap year)
    long int hours; // from 0 to 24
    long int minutes; // from 0 to 60
    long int seconds; // from 0 to 60
};

#ifdef __cplusplus
}
#endif

#endif // STRUCT_COUNT_H