#include <stdio.h>
int thangdz(int n,int k,int a[])
{    int i,dem=0;
     for(i=1;i<=n;i++)
     {  if(a[i]>=a[k]&&a[i]>0)
         {dem=dem+1;}
		 }
		 
	return dem;
	 }
int main()
{  int p,c,thangct;
   scanf("%d%d",&p,&c);
   int a[p];
    for(thangct=1;thangct<=p;thangct++)
    { scanf("%d",&a[thangct]);
    }
   printf("%d",thangdz(p,c,a));
   
   	return 0;
	   }     
