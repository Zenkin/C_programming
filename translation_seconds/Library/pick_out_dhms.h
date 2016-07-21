#ifndef PICK_OUT_DHMS_H
#define PICK_OUT_DHMS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "struct_result.h"

int pick_out_days(long seconds);
int pick_out_hours(long seconds);
int pick_out_minutes(long seconds);

#ifdef __cplusplus
}
#endif

#endif // PICK_OUT_DHMS_H
