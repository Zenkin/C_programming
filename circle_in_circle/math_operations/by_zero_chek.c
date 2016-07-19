#include "by_zero_chek.h"

bool is_const_zero(struct Circle circle1, struct Circle circle2)
{
    return circle1.radius * circle1.radius - circle2.radius * circle2.radius
           - circle1.x * circle1.x + circle2.x * circle2.x
           - circle1.y * circle1.y + circle2.y * circle2.y == 0 ? true : false;
}
