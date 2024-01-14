#include <stdio.h>

// return_type + No_parameter
int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    printf("%d", sum());
    return 0;
}