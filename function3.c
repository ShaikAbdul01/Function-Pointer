#include <stdio.h>
// No_return_type + parameter
void sum(int x, int y)
{
    printf("%d", x + y);
    return;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}