#include<stdio.h>

int main(){
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a>0&&b>0)
	{
	for(i=a;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		{ printf("%d",i);
		break;}
		}
	for(i=a;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		{printf("\n%d",i);
		break;}
		}
		}
    else
    { printf("ERROR");}
    return 0;
    }
    
	

