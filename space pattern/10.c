#include<stdio.h>
main()
{
	int i,j,space;
	
	for(i=5;i>=1;i--)
	{
		for(space=i;space<5;space++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}