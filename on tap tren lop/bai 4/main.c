#include <stdio.h>
#include<math.h>
#define pi 3.14159265358979
#define e 2.71828182845904
int main()
{
	float a,b,x,A,T,M;
	scanf("%f",&x);
	a=sqrt(pow(2,x)+pi);
	b=log(pow(e,x-1.23)+1)/log(e);
	T=cos(3*a*180/pi)+pow(2*pow(x,3)+x+1,0.2);
	M=log(pow(3,x*x)+2.14*b)/log(7);
	A=T/M;
	printf("%f",A);
	return 0;
	}
	               
	
	
	
