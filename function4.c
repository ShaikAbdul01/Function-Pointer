#include <stdio.h>
// No_return_type + No_parameter

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x+y);
}

int main()
{
    sum();
    sum();
    sum();
    return 0;
}