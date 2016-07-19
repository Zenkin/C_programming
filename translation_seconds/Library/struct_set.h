#ifndef STRUCT_SET_H
#define STRUCT_SET_H

#ifdef __cplusplus
extern "C" {
#endif

struct set // days, hours, minutes and seconds
{
    unsigned short int days; // from 0 to 365 (ignore leap year)
    unsigned short int hours; // from 0 to 24
    unsigned short int minutes; // from 0 to 60
    unsigned short int seconds; // from 0 to 60
};

#ifdef __cplusplus
}
#endif

#endif // STRUCT_SET_H
