#include "start_cheking.h"
#include "by_zero_chek.h"

bool start_cheking(struct Circle circle1, struct Circle circle2)
{
    if (((circle1.x - circle2.x) == 0) && ((circle1.y - circle2.y) == 0) && is_const_zero(circle1, circle2))
    {
        return false;
    }
    else
    {
        return true;
    }
}
