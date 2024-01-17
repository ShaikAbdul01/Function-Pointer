#include <stdio.h>

/*
Question: Write a function named count_odd() which receives an array of integers and the size of that array and counts the number of odd elements in that array and returns that. Call that function in the main function and print the count there.
 */

int count_odd(int *ar, int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 != 0)
        {
            odd++;
        }
    }
    return odd;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("%d", count_odd(ar, n));
    return 0;
}