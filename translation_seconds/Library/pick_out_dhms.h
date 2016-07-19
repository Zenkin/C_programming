#ifndef PICK_OUT_DHMS_H
#define PICK_OUT_DHMS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "struct_result.h"

struct Result pick_out_days(long int seconds); // return count days in all seconds which served in the function
struct Result pick_out_hours(long int seconds); // return count hours in all seconds which served in the function
struct Result pick_out_minutes(long int seconds); // return count minutes in all seconds which served in the function

#ifdef __cplusplus
}
#endif

#endif // PICK_OUT_DHMS_H
