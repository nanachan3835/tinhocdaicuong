#include<stdio.h>

int main()
{ 
	int i,j,t=0;

	int H[20];
	for(i=0;i<20;i++)
	{
		scanf("%d",&H[i]);
		j++;
	}
	for(i=0;i<20;i++)
	{
      t=t+H[i];
	}
	printf("%d", t/j);
	printf(" %d",j);

	
	return 0;
}

	