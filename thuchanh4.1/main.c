#include<stdio.h>

int main()
{
    int a,i,t=1;
    scanf("%d",&a);
    if(a>8||a<0)
    { 
         printf("ERROR");
    }     
    else 
    { 
        for(i=1;i<=a;i++)
        { 
            a =i*(i+1);
        }
        printf("%d",a);
    }
    return 0;
}
