//мне кажется более понятно, когда все хэдеры подключаются в одном месте.
//здесь оставить только convert_seconds.h. А остальные в нём подключить.
#include "convert_seconds.h"
#include "time_in_days_hours_minutes_seconds.h"
#include <stdio.h>

// поместить в header. например, в pick_out_dhms.h
// и в другом месте эти константы называются немного не так.
const long seconds_in_one_min = 60;
const long seconds_in_one_hour = 3600;
const long seconds_in_one_day = 86400;

struct Time_in_days_hours_minutes_seconds convert_seconds(long seconds)
{
    struct Time_in_days_hours_minutes_seconds time_in_dhms;

    int days = pick_out_days(seconds);
    time_in_dhms.days = days;
    
    //лучше сделать seconds -= days*seconds_in_one_day;
    //int hours = pick_out_hours(seconds);
    //
    //или функцию выделить отдельную для этого
    //
    //или сделать так, чтобы функция pick_out_hours(seconds) изменяла значение переменной seconds:
    // int pick_out_hours(int *seconds) //передача указателя на seconds.
    // {
    //     int days = *seconds/seconds_in_day; //* - разыменовывает указатель
    //     *seconds -= days*seconds_in_day;
    //     return days;
    // }
    //
    // выбери один из этих способов
    //
    // при таком раскладе получится так:
    // time_in_dhms.days = pick_out_days(seconds);
    // time_in_dhms.hours = pick_out_hours(seconds);
    // time_in_dhms.minutes = pick_out_minutes(seconds);
    // pick_out же переводится еще как вырвать? получится, что она вырывает из seconds определенное их число.
    // 
    // мне кажется, что time_units.days
    // time_units.hours
    // time_units.minutes
    // выглядит более красиво. возможно, так кажется только мне.
    
    int hours = pick_out_hours(seconds - (days * seconds_in_one_day));
    time_in_dhms.hours = hours;

    int minutes = pick_out_minutes(seconds - (days * seconds_in_one_day) - (hours * seconds_in_one_hour));
    time_in_dhms.minutes = minutes;
    
    // если выбрать один из предложенных способов, то вот такой колбасы не будет.
    time_in_dhms.seconds = seconds - (days * seconds_in_one_day)
                           - (hours * seconds_in_one_hour)
                           - (minutes * seconds_in_one_min);

    return time_in_dhms;
}
