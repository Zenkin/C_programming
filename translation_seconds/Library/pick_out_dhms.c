#include "pick_out_dhms.h"
#include <stdio.h>

const int seconds_in_day = 86400;
const int seconds_in_hour = 3600;
const int seconds_in_minutes = 60;

// return count days in all seconds which served in the function
// функция, которая называется "выделить дни" возвращает некую структуру с неудачным названием. А эта структура хранит не только
// дни, но и потраченные секунды. Функция с таким названием должна возвращать только число дней. Все остальное - побочное поведение.
// И вообще, я считаю, что для одной функции делать сразу два действия -  вычислять число дней и вычислять число потраченных секунд - 
// это много. функции должны быть короткими, понятными, и делать должны что-то одно смысловое.
//три фунции одинаковые - это относится к ним всем

struct Result pick_out_days(long seconds)
    {      
        //Не нравится назавние структуры: оно не отражает ничего.
        struct Result result1;
        if (seconds == 0)
        {
            result1.count = 0;
            result1.lost_seconds = 0;
            return result1;
        }
        else
        {
            int days = seconds / seconds_in_day;
            if (days == 0)
            {
                result1.count = 0;
                result1.lost_seconds = seconds;
            }
            else
            {
                result1.count = days;
                result1.lost_seconds = seconds - (days * seconds_in_day);
            }
            return result1;
         }
    }


//я вижу 2 варианта, как лучше сделать:
//1) сделать функцию pick_out_days(), возвращающей только число дней.
//и потом отдельно вычислять число затраченных секунд (например в отдельной функции)

//2) сделать функцию pick_out_days(), возвращающей число дней и изменяющей аргумент seconds.
//это не будет нарушать ничего. pick_out в таком случае можно будет перевести не только, как выделить, но и как вырвать.
//вызываешь функцию - она возвращает число дней, и вырывает число секунд, которым равно число дней.

//Это касается всех этих аналогичных функций. Потому что при текущем раскладе эти функции дублируют друг друга на 100 % почти. 
//Получится в итоге так:
//pick_out_days(seconds);//исходный seconds
//pick_out_hours(seconds);//здесь уже новый seconds, который был изменен. он равен по твоему seconds - lost_seconds.
//pick_out_minutes(seconds);//здесь новый



struct Result pick_out_hours(long seconds)
    {
        struct Result result1;
        if (seconds == 0)
        {
            return result1;
            result1.count = 0;
            result1.lost_seconds = 0;
        }
        else
        {
            int hours = seconds / seconds_in_hour;
            if (hours == 0)
            {
                result1.count = 0;
                result1.lost_seconds = seconds;
            }
            else
            {
                result1.count = hours;
                result1.lost_seconds = seconds - (hours * seconds_in_hour);
            }
            return result1;
        }
    }

struct Result pick_out_minutes(long seconds)
    {
        struct Result result1;
        if (seconds == 0)
        {
            return result1;
            result1.count = 0;
            result1.lost_seconds = 0;
        }
        else
        {
            int minutes = seconds / seconds_in_minutes;
            if (minutes == 0)
            {
                result1.count = 0;
                result1.lost_seconds = seconds;
            }
            else
            {
                result1.count = minutes;
                result1.lost_seconds = seconds - (minutes * seconds_in_minutes);
            }
            return result1;
        }
    }
