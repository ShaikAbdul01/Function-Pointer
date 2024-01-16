#include <stdio.h>

void fun(int *p)
{
    printf("Value of p %d & address %p\n", *p, p);
    printf("Address of p %p\n", &p);
    *p = 1000;
}
int main()
{
    int x = 10;
    printf("Value of x %d & address %p\n", x, &x);
    fun(&x);
    printf("Value of x %d & address %p\n", x, &x);

    return 0;
}