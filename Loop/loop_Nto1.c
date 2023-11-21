//WAP to print n to 10 (user input) using while loop

#include<stdio.h>
main()
{
	int a=1,b;
	printf("Enter Number to start loop:");
	scanf("%d",&b);
	
	while(b>=1)
	{
		printf("%d ",b);
		b--;
	}
}