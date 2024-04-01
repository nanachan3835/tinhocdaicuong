#include <stdio.h>
int main ()
{
    int i, n, a = 0, d = 0;
    double S = 0, tb = 0;
    scanf("%d",&n);
    double arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%lf",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            a = a + 1;
            tb = tb + arr[i];
        }
        if(arr[i] > 0)
        {
            d = d + 1;
            S = S + arr[i];
        }
    }
    if(a == 0)
    { printf("Mang khong co so am ");}
    else
    {printf("%lf ", tb/a);}
    if(d == 0)
    { printf("Mang khong co so duong");}
    else
    {
        printf("%lf",S);
    }
    return 0;
}
