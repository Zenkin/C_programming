#include "data_processing.h"

// data_processing переводится как обработка данных
void data_processing()
{
    struct Time_units data;

    long int seconds = input_seconds();
    
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
        data = convert_seconds(seconds);
        printf("%ld seconds is ", seconds);
        output_dhms(&data);
    }
}
