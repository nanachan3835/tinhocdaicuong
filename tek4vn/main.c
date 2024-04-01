#include<stdio.h>
#include<math.h>
void main()
{  
    int t,i,n,j,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    { m=0; 
      scanf("%d",&n);
      for(j=2;j<=sqrt(n);j++)       
      { 
       
        if(n%j==0)
        {  printf("NO\n");
		    m=1;
			break;
		}}
	
	  if(m==0)
	  { printf("YES\n");
	  }}
	  return 0;
	  }
        
    
    
