#include "data_processing.h"
#include "input_data.h"

void data_processing()
{
    struct Time_in_days_hours_minutes_seconds data;

    long int seconds = input_data();
    if (seconds == 0)
    {
        puts("0 seconds is zero");
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
        output_data(data);
    }
}
