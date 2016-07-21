//ОПЕЧАТКА В НАЗВАНИИ ФАЙЛА

#include "convert_seconds.h"
#include "struct_count.h"
#include <stdio.h>

const long seconds_in_one_min = 60;
const long seconds_in_one_hour = 3600;
const long seconds_in_one_day = 86400;

//Поменять имя структуры, которая возвращается.
struct Time_in_dhms convert_seconds(long seconds)
{
    struct Time_in_dhms count_of;

    count_of.days = 0;
    count_of.hours = 0;
    count_of.minutes = 0;
    count_of.seconds = 0;
    //не нравится название переменной - result1.
    struct Result result1;
    
    //не нравится название count_of. Да, когда ты обращаешься к данным структуры, получается прикольно: count_of.days....
    //но прикольно только в этом случае, а когда просто смотришь на count_of - не прикольно.
    //когда ты поменяешь название структуры с Count на более подходящее. Можно будет назвать переменную таким же названием, но
    //с маленькой буквы.

    result1 = pick_out_days(seconds);
    count_of.days = result1.count;
    seconds = result1.lost_seconds;


    result1 = pick_out_hours(seconds);
    count_of.hours = result1.count;
    seconds = result1.lost_seconds;
    
    result1 = pick_out_minutes(seconds);
    count_of.minutes = result1.count;
    
    return count_of;
}
