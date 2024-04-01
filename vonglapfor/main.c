#include<stdio.h>

int main()
{
	int i,j,k;
	int n;
	scanf("%d",&n);
	while(n%2==0)
	{
		printf("NHAP LAI n:");
		scanf("%d",&n);
    }
	for(i=0;i<n;i++)
	{
		if(i<=n/2)
		{
			for(j=0;j<n/2-i;j++)
		    {
			    printf(" ");
		    }
		     for(j=0;j<i*2+1;j++)
	 	    {
			    printf("*");
		    }
			for(j=0;j<n/2-i;j++)
		    {
			    printf(" ");
	       	}
		printf("\n");
	    }
	    else
	    {
	    	for(j=0;j<n/2-(n-i-1);j++)
		    {
			    printf(" ");
		    }
		     for(j=0;j<(n-i-1)*2+1;j++)
	 	    {
			    printf("*");
		    }
			for(j=0;j<n/2-(n-i-1);j++)
		    {
			    printf(" ");
	       	}
	    	printf("\n");
	    }
	}
	return 0;
}
		
