//ОПЕЧАТКА В НАЗВАНИИ ФАЙЛА

#include "convert_seconds.h"
#include "struct_count.h"

//define не круто. а вот const int operand = value круто.
#define min 60 // seconds in minute
#define hour 3600 // seconds in hour
#define day 86400 // seconds in day

//Поменять имя структуры, которая возвращается.
struct Count convert_seconds(long int seconds)
{
    //не нравится название переменной - result1.
    struct Result result1;
    
    //не нравится название count_of. Да, когда ты обращаешься к данным структуры, получается прикольно: count_of.days....
    //но прикольно только в этом случае, а когда просто смотришь на count_of - не прикольно.
    //когда ты поменяешь название структуры с Count на более подходящее. Можно будет назвать переменную таким же названием, но
    //с маленькой буквы.
    struct Count count_of;

    result1 = pick_out_days(seconds);
    
    //какой смысл в этом ветвлении?
    // в if и в else выполняется ровным счетом одно и то же.
    // этого достаточно:
    // count_of.days = result1.count;
    // seconds = result1.lost_seconds;
    
    if (result1.count == 0)
    {
        count_of.days = 0;
        seconds = result1.lost_seconds;
    }
    else
    {
        count_of.days = result1.count;
        seconds = result1.lost_seconds;
    }

    result1 = pick_out_hours(seconds);
    //аналогично
    if (result1.count == 0)
    {
        count_of.hours = 0;
        seconds = result1.lost_seconds;
    }
    else
    {
        count_of.hours = result1.count;
        seconds = result1.lost_seconds;
    }
    
    //аналогично
    result1 = pick_out_minutes(seconds);
    if (result1.count == 0)
    {
        count_of.minutes = 0;
        count_of.seconds = result1.lost_seconds;
    }
    else
    {
        count_of.minutes = result1.count;
        count_of.seconds = result1.lost_seconds;
    }
    
    return count_of;
}
