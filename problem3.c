#include <stdio.h>

char capital_to_small(char s)
{
    return s + 32;
}
int main()
{
    char s;
    scanf("%s", &s);
    printf("%c", capital_to_small(s));
    return 0;
}