#include <stdio.h>

int main()
{
	float a,b,c,p,S;
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%f\t%f\t%f\t%f",S,2*S/a,2*S/b,2*S/c);
	return 0;
	}
