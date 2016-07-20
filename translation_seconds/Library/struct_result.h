#ifndef STRUCT_RESULT_H
#define STRUCT_RESULT_H

#ifdef __cplusplus
extern "C" {
#endif

//?????
//скорее всего, эта структурка не понадобится
struct Result // the result of which returns pick_out_* functions( * - d/h/m/s)
{
    long int count; // the count of d/h/m/s in all seconds( which served in function)
    long int lost_seconds; // "all seconds( which served in function) - count * d/h/m/s"
};

#ifdef __cplusplus
}
#endif

#endif // STRUCT_RESULT_H
