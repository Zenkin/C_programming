#include "pick_out_dhms.h"

// return count days in all seconds which served in the function
// функция, которая называется "выделить дни" возвращает некую структуру с неудачным названием. А эта структура хранит не только
// дни, но и потраченные секунды. Функция с таким названием должна возвращать только число дней. Все остальное - побочное поведение.
// И вообще, я считаю, что для одной функции делать сразу два действия -  вычислять число дней и вычислять число потраченных секунд - 
// это много. функции должны быть короткими, понятными, и делать должны что-то одно смысловое.
//три фунции одинаковые - это относится к ним всем
struct Result pick_out_days(long int seconds)
//просто long достаточно. Ты ограничиваешь вроде в приложении число секунд тем их количеством, что содержится в году. 31 536 000 секунд.
//для большинства современных компиляторов подойдет int (=long = 4 байта). ну или unsigned int. Но в принципе, чтобы программа работала с любыми
//компиляторами и на всех разрядностях ос, можно оставить long. Хотя ты ведь используешь последний стандарт языка, который поддерживается
//далеко не всеми компиляторами.
//это все написал, чтобы ты задумывался во время написания программ, достаточно ли данного типа. ну и не использовал 
    {
        long int day = 86400; //seconds_in_day получше будет, а главное понятнее. а еще это константа.
        //поэтому лучше объявлять с const
        
        //Не нравится назавние структуры: оно не отражает ничего.
        struct Result result1;
        
        //эта переменная содержит в себе как я понял число полных дней в данном числе секунд.
        //возможно, стоит поменять название? days, например, или еще как.
        int int_part_day = seconds / day;
        if (int_part_day == 0) //лучше сделать проверку seconds == 0 в самом начале функции. в случае выполнения этого условия
        //не придется создавать ненужную переменную int_part_day
        {
            result1.count = 0;
            result1.lost_seconds = seconds;
        }
        else
        {
            result1.count = int_part_day;
            result1.lost_seconds = seconds - (int_part_day * day);
        }
        return result1;
    }


//я вижу 2 варианта, как лучше сделать:
//1) сделать функцию pick_out_days(), возвращающей только число дней.
//и потом отдельно вычислять число затраченных секунд (например в отдельной функции)

//2) сделать функцию pick_out_days(), возвращающей число дней и изменяющей аргумент seconds.
//это не будет нарушать ничего. pick_out в таком случае можно будет перевести не только, как выделить, но и как вырвать.
//вызываешь функцию - она возвращает число дней, и вырывает число секунд, которым равно число дней.

//Это касается всех этих аналогичных функций. Потому что при текущем раскладе эти функции дублируют друг друга на 100 % почти. 
//Получится в итоге так:
pick_out_days(seconds);//исходный seconds
pick_out_hours(seconds);//здесь уже новый seconds, который был изменен. он равен по твоему seconds - lost_seconds.
pick_out_minutes(seconds);//здесь новый




// return count hours in all seconds which served in the function
struct Result pick_out_hours(long int seconds)
    {
        long int hour = 3600;
        struct Result result1;

        int int_part_hour = seconds / hour;
        if (int_part_hour == 0)
        {
            result1.count = 0;
            result1.lost_seconds = seconds;
        }
        else
        {
            result1.count = int_part_hour;
            result1.lost_seconds = seconds - (int_part_hour * hour);
        }
        return result1;
    }

// return count minutes in all seconds which served in the function
struct Result pick_out_minutes(long int seconds)
    {
        long int min = 60;
        struct Result result1;

        int int_part_min = seconds / min;
        if (int_part_min == 0)
        {
            result1.count = 0;
            result1.lost_seconds = seconds;
        }
        else
        {
            result1.count = int_part_min;
            result1.lost_seconds = seconds - (int_part_min * min);
        }
        return result1;
    }
