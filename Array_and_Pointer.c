#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    /*  for (int i = 0; i < 5; i++)
     {
         printf("a[%d] - %p - %d\n", i, &a[i], a[i]);
     } */

    /* printf("value of a: %d\n", *a);
    printf("value of a[0]: %d\n", a[0]);
    printf("address of a: %p\n", &a);
    printf("address of a[0]: %p\n", &a[0]); */

    printf("%d\n", *(a + 1));
    printf("%d\n", a[1]);
    printf("%d\n", *(1+a));
    printf("%d\n", 1[a]);
    return 0;
}