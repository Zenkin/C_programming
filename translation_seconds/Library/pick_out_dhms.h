#ifndef PICK_OUT_DHMS_H
#define PICK_OUT_DHMS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

long pick_out_days(long *seconds);
long pick_out_hours(long *seconds);
long pick_out_minutes(long *seconds);

#ifdef __cplusplus
}
#endif

#endif // PICK_OUT_DHMS_H
