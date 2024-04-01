#include <stdio.h>

int main(){
	int n,a,b,c;
	scanf("%d",&n);
  if(n>=1000)
	{ printf("ERROR");}
	else 
	{
	 a=n/100;
	 b=(n-a*100)/10;
	 c=n-a*100-b*10;
	 printf("%d",a+b+c);
	}
	return 0;
	}
    	
