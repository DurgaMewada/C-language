#include<stdio.h>
main()
{
	int i,j,space;
	
	for(i=1;i<=5;i++)
   	{
		for(space=1;space<i;space++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			if(j%2==0)
			{
				printf("|");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
}