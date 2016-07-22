#include "input_data.h"

const long int max_input_seconds = 31536000;

//считать данные - очень обще. по сути ты считываешь только seconds
long int input_data()
{
    //существует правило: объявляй переменные как можно ближе к месту их использования
    //согласно нему, их можно перенести ниже
    long int input_seconds;
    
    //пессимистичный подход. сначала данные неверные )
    bool invalid_values = true;
    puts("Enter seconds(not more 31'536'000):");
    printf("Input seconds: ");
    while (invalid_values)
    {
        scanf("%ld", &input_seconds);
        if ((input_seconds > max_input_seconds) || (input_seconds < 0))
        {
            print_error();
            //лишняя строчка.
            invalid_values = true;
        }
        else
        {
            invalid_values = false; //при таком подходе, возможно будет более эффективно
            //избежать еще одной проверки invalid_values.
            //выполнив здесь break;
            //но и так тоже хорошо.
            //хотя.. вообще кажется, что можно обойтись без break и без лишних сравнений
        }
    }
    return input_seconds;
}
