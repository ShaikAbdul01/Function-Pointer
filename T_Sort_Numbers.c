#include <stdio.h>
#include <limits.h>
int main()
{
    int ar[3] = {0};
    scanf("%d %d %d", &ar[0], &ar[1], &ar[2]);
    int min = INT_MAX, max = INT_MIN;
    int arr[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        arr[i] = ar[i];
    }
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {

            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}