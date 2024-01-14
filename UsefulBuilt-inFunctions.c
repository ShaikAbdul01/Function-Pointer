#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
    int x;
    float y;
    double z;
    long long int a;
    // scanf("%lf %f", &z, &y);
    // printf("%lf %f\n", ceil(z), ceil(y));
    // printf("%lf %f\n", floor(z), floor(y));
    // printf("%lf %f\n", round(z), round(y));

    scanf("%lf %d", &z, &x);
    // printf("%lf %lf\n", sqrt(z),sqrt(x));
    // printf("%lf\n", pow(z,x));
    printf("%d %d\n", abs(z),abs(x));
    // 13 11.04 5.344635 234532412
    return 0;
}