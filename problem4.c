#include <stdio.h>
#include <stdlib.h>
/*
Question: Write a function named my_abs() that receives an integer value as parameter and returns the absolute value of that. Absolute value means if the value is negative it will be converted to positive value. Then print the value in the main function.
 */

int my_abs(int x)
{
    return abs(x);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", my_abs(n));
    return 0;
}