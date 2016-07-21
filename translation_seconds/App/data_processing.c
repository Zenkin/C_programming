#include "data_processing.h"
#include "input_data.h"

void data_processing()
{
    struct Time_in_dhms data;

    long int seconds = input_data();
    data = convert_seconds(seconds); // convert seconds to days.hours.minutes.seconds
    if (seconds == 1)
    {
        printf("%ld second is ", seconds);
    }
    else
    {
        printf("%ld seconds is ", seconds);
    }
    if ((data.days == 0) && (data.hours == 0) && (data.minutes == 0) && (data.seconds == 0))
    {
        puts("0 seconds");
        return;
    }
    else
    {
        output_data(data);
    }
}
