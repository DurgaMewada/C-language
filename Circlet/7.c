//	Write a Program to print the below pattern using nested for loop.
//	*  *  *  *  *
//	*           *
//	*  *  *  *  *
//	*           *
//	*           *





#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||i==1||i==3||j==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

