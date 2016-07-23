#ifndef CONVERT_SECONDS_H
#define CONVERT_SECONDS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "time_units.h"
#include "pick_out_dhms.h"

struct Time_units convert_seconds(long seconds);

#ifdef __cplusplus
}
#endif

#endif // CONVERT_SECONDS_H
