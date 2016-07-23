#include "data_processing.h"

//убрать в хэдер data_processing
#include "input_seconds.h"

//функцию лучше называть глаголом
//даже если не обращать на это внимание, то по смыслу не очень хорошее название.
//какой-то процесс с данными
void data_processing()
{
    struct Time_in_days_hours_minutes_seconds data; //подумай над названием для переменной

    long int seconds = input_seconds();
    
    //зачем нужны эти проверки? 0, 1 ?
    if (seconds == 0)
    {
        puts("0 seconds it is zero");
        return;
    }
    else if (seconds == 1)
    {
        puts("1 second is one second");
    }
    else
    {
        //оставить только это.
        data = convert_seconds(seconds);
        printf("%ld seconds is ", seconds);
        output_data(data);
    }
}
