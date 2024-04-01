#include<stdio.h>
int main(){
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
     {
         for(i=0;i<=j;i++)
         {
             if(a[i]>a[j])
             { t=a[i];
              a[i]=a[j];
              a[j]=t;}
         }}
         for(j=0;j<n;j++)
         { printf("%d",a[j]);
         }
         return 0;
         
               
     }

