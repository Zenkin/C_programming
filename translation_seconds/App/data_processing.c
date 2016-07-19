#include "data_processing.h"
#include "input_data.h"

void data_processing()
{
    struct Count data;
    long int seconds = input_data();

    data = convert_seconds(seconds); // convert seconds to days.hours.minutes.seconds
    output_data(data);
}
