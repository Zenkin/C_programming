#ifndef STRUCT_RESULT_H
#define STRUCT_RESULT_H

#ifdef __cplusplus
extern "C" {
#endif

struct Result // the result of which returns pick_out_* functions( * - d/h/m/s)
{
    long count; // the count of d/h/m/s in all seconds( which served in function)
    long lost_seconds; // "all seconds( which served in function) - count * d/h/m/s"
};

#ifdef __cplusplus
}
#endif

#endif // STRUCT_RESULT_H
