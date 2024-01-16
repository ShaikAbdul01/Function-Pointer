#include <stdio.h>
#include <string.h>
void fun(char *s)
{
    // printf("%s",s);
    // printf("%d",strlen(s));
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
}
int main()
{
    char s[] = "Hello";
    // printf("%s",s);
    fun(s);
    return 0;
}