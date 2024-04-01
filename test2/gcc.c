#include<stdio.h>

int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		if((i%2==1)&&i>1&&i<9)
		{ printf("%d\t",i);
		}
		else if(i==2)
		{ printf("%d\t",i);
	    } 
	   else if(i>=9&&i%3==1&&i%5==1&&i%7==1&&i%2==1){
	   	printf("%d\t",i);
	    }
	    }
	    return 0;
	    }
		
	
