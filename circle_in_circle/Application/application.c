#include "application.h"

void arguments_input()
{
    puts("Enter the coordinates of the center of the first circle and its radius:");
    puts("(x1, y1 and r1)");
    double x1;
    double y1;
    double radius1;
    bool flag = true;

    while (flag)
    {
        scanf("%lf%lf%lf", &x1, &y1, &radius1);
        if (radius1 <= 0)
        {
            print_error();
            flag = true;
        }
        else
        {
            flag = false;
        }
    }

    puts("Enter the coordinates of the center of the second circle and its radius:");
    puts("(x2, y2 and r2)");
    double x2;
    double y2;
    double radius2;
    flag = true;

    while (flag)
    {
        scanf("%lf%lf%lf", &x2, &y2, &radius2);
        if (radius2 <= 0)
        {
            print_error();
            flag = true;
        }
        else
        {
            flag = false;
        }
    }

    struct Circle circle1;
    circle1.x = x1;
    circle1.y = y1;
    circle1.radius = radius1;

    struct Circle circle2;
    circle2.x = x2;
    circle2.y = y2;
    circle2.radius = radius2;

    begin(circle1, circle2);

}

void print_error()
{
    puts("Invalid arguments!");
    puts("try again.");
}

void begin(struct Circle circle1, struct Circle circle2)
{

    if (start_cheking(circle1, circle2))
    {
        printf("Yes, circle with radius %lf lies in circle with radius %lf.\n",
        smaller_circle(circle1, circle2),
        larger_circle(circle1, circle2));

    }
    else
    {
        if (circle1.radius == circle2.radius)
        {
            puts("circles superimposed.");
        }
        else
        {
            puts("circles do not intersect.");
        }
    }
}
