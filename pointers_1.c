#include <stdio.h>

int main(void)
{
    int x = 12;
    int *ptr_x = &x;

    printf("The value od x is %d\n", *ptr_x);

    return (0);
}
