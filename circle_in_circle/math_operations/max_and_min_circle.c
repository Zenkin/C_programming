#include "math_operations.h"

double smaller_circle(struct Circle circle1, struct Circle circle2)
{
    if (circle1.radius < circle2.radius)
    {
        return circle1.radius;
    }
    else
    {
        return circle2.radius;
    }
}

double larger_circle(struct Circle circle1, struct Circle circle2)
{
    if (circle1.radius > circle2.radius)
    {
        return circle1.radius;
    }
    else
    {
        return circle2.radius;
    }
}
