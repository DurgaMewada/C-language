#include<stdio.h>
main()
{
	int Number;
	
	printf("Enter Any Number to check:");
	scanf("%d",&Number);
	
	if(Number>0)
	{
		printf("This Number is Positive");
	}
	else
	{
		if(Number==0)
		{
			printf("This Number is Neutral");
		}
		else
		{
			printf("This Number is negative");
		}
	}
}