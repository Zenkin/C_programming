#ifndef MAX_AND_MIN_CIRCLE_H
#define MAX_AND_MIN_CIRCLE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "math_operations.h"

double smaller_circle(struct Circle circle1, struct Circle circle2);
double larger_circle(struct Circle circle1, struct Circle circle2);

#ifdef __cplusplus
}
#endif

#endif // MAX_AND_MIN_CIRCLE_H
