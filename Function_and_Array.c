#include <stdio.h>
void fun(int *ar, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int ar[] = {10, 20, 30, 40, 50};
    int sz = sizeof(ar) / sizeof(int);
    // printf("%d\n",sz);
    fun(ar, sz);
    return 0;
}