#include "output_data.h"

//зачем в файле низкого уровня нужен файл из более высокого уровня?
#include "data_processing.h"

//считается, что пользовательские типы лучше передавать в функцию по указателю. чтобы не создавать еще один объект и не тратить на это память.
//можно попробовать передать указатель
void output_data(struct Time_in_days_hours_minutes_seconds output)
{
    //зачем создавать еще один объект?
    struct Time_in_days_hours_minutes_seconds data;
    data = output;
    if (data.days != 0)
    {
        printf("%ld ", data.days);
        if (data.days > 1)
        {
            printf("days ");
        }
        else
        {
            printf("day ");
        }
    }
    if (data.hours != 0)
    {
        printf("%ld ", data.hours);
        if (data.hours > 1)
        {
            printf("hours ");
        }
        else
        {
            printf("hour ");
        }
    }
    if (data.minutes != 0)
    {
        printf("%ld ", data.minutes);
        if (data.minutes > 1)
        {
            printf("minutes ");
        }
        else
        {
            printf("minute ");
        }
    }
    if (data.seconds > 0)
    {
        printf("%ld ", data.seconds);
        if ((data.seconds > 1)||(data.seconds < 1))
        {
            printf("seconds ");
        }
        else
        {
            printf("second ");
        }
    }
    //а если на вход будет подано 0 секунд, то программа ничего не выведет?
}
