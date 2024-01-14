#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);
    int *p;
    p=&x;
    // int *p = &x;
    printf("%p\n", &p);
    printf("%d\n", *p);
    *p = 500;
    printf("%d\n", *p);

    return 0;
}