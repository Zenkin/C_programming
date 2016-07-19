#include "hello_world.h"
#include "factorial.h"

int main(void)
{
    int number;

    scanf("%d", &number);
    for (int i = 0; i < factorial(number); ++i)
    {
        print_hello_world();
    }
    return 0;
}
