#ifndef CONVERT_SECONDS_H
#define CONVERT_SECONDS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "struct_count.h"
#include "pick_out_dhms.h"

struct Time_in_days_hours_minutes_seconds convert_seconds(long seconds);

#ifdef __cplusplus
}
#endif

#endif // CONVERT_SECONDS_H
