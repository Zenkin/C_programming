#include "pick_out_dhms.h"
#include <stdio.h>

//я видел, что ты эти константы объявляешь еще в другом месте.
//значит их надо вынести в header file. и этот header подключать
const int seconds_in_day = 86400;
const int seconds_in_hour = 3600;
const int seconds_in_minutes = 60;

//странное форматирование.
int pick_out_days(long seconds)
    {     
        //если seconds == 0, то seconds / seconds_in_day == 0 тоже
        if (seconds == 0)
        {
            return 0;
        }
        else
        {
            return seconds / seconds_in_day;
        }
    }

int pick_out_hours(long seconds)
    {
        //аналогично
        if (seconds == 0)
        {
            return 0;
        }
        else
        {
            return seconds / seconds_in_hour;
        }
    }

int pick_out_minutes(long seconds)
    {
        //аналогично
        if (seconds == 0)
        {
            return 0;
        }
        else
        {
            int minutes = seconds / seconds_in_minutes;
            if (minutes == 0)
            {
                return 0;
            }
            else
            {
                return minutes;
            }
        }
    }
