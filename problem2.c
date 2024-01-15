#include <stdio.h>

char small_to_capital(char s)
{
    return s - 32;
}
int main()
{
    char s;
    scanf("%s", &s);
    printf("%c", small_to_capital(s));
    return 0;
}