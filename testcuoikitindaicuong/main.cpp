
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
   char T[20],M[20];
   int i,n=0;
   
    fgets(T,20,stdin);
   if(strlen(T)>20)
   {
       printf("nhap lai chuoi:");
       scanf("%s",T);
   }
   else
   {    
       for(i=0;i<strlen(T);i++)
       {
        if(isdigit(T[i]))
        {
            n++;
            printf("%c ",T[i]);
            
            
        }
       }
       
     
          
       
    printf("%d",n);}
           

    return 0;
}

