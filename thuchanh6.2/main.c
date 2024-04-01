#include<stdio.h>
#include<string.h>

int main()
{
    char M[1000];
    int start=0,i;
    fgets(M,1000,stdin);
    
    for(i=0;i<strlen(M)-1;i++)
    {
        if(M[i]!=' ')
        {
            start=1;
        }
        //
        if(start==1)
        {
            if(M[i]==' '&&M[i+1]==' ')
            { 
                continue;
            }
            else if(M[i]==' '&&i==(strlen(M)-2))
            {
                continue;
            }
            else
            {
                printf("%c",M[i]);
            }
        }
    }
            
    return 0;
}
