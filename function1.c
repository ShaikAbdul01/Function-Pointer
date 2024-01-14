#include <stdio.h>

//return_type + parameter
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    return 0;
}