#include <stdio.h>
#include<math.h>
int main()
{
	float  a,b,c,Fa,Fb,Fc;
	scanf("%f%f%f",&a,&b,&c);
	                    
	Fa=pow(a,7)+5*cbrt(pow(a,5)+3*pow(a,3)+2)+12;
	Fb=pow(b,7)+5*cbrt(pow(b,5)+3*pow(b,3)+2)+12;
	Fc=pow(c,7)+5*cbrt(pow(c,5)+3*pow(c,3)+2)+12;
	printf("TRUNG BINH CONG LA: %f",(Fa+Fb+Fc)/3);
	return 0 ; }
