#include "factorial.h"

int factorial(int number)
{
    //return number == 0 ? 1 : number * factorial(number - 1);

    if (number == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= number; ++i)
    {
        result *= i;
    }
    return result;
}
