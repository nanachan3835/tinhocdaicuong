#include<stdio.h>
#include<math.h>

int main()
{ 
 int n,i,t;
 scanf("%d",&n);
 if(n<2)
 {printf("Khong phai la so nguyen to");}
 else
 { for(i=2;i<n;i++)
   { t=n%i;
     if(t==0)
     { printf("Khong phai la so nguyen to") ;
       break;}
	   }
	if(t!=0)
	{ printf("La so nguyen to");}
   
 } 
return 0;
}

