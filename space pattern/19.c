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
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}