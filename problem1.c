#include <stdio.h>

int char_to_ascii(char s)
{
    return s;
}
int main()
{
    char s;
    scanf("%s", &s);

    printf("%d\n", char_to_ascii(s));
    return 0;
}