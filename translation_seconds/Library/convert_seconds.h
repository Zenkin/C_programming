#ifndef CONVERT_SECONDS_H
#define CONVERT_SECONDS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "struct_count.h"
#include "pick_out_dhms.h"

struct Count convert_seconds(long int seconds); // convert seconds in days.hours.minutes.seconds

#ifdef __cplusplus
}
#endif

#endif // CONVERT_SECONDS_H
