#include <stdio.h>
void fun(int x)
{
    // int x = 100;
    printf("fun function x value: %d\n", x);
    printf("fun function x address: %d\n", &x);
}
int main()
{
    int x = 10;
    printf("Main function x value: %d\n", x);
    printf("Main function x address: %p\n", &x);
    fun(x);
    return 0;
}