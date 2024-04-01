#include <stdio.h>

int main()
{ 
    float x1,x2,x3,y1,y2,y3;
    float A,B,C,AM;
    
    scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);
    A=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    B=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    C=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    AM=sqrt((B*B+C*C)/2-A*A/4);
	printf("%f\t%f\t%f\t%f",A,B,C,AM);
	return 0 ;
	}
    
