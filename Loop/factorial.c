//WAP to calculate the factorial of using while loop

#include<stdio.h>

main()
{
	int factorial =1;
	int number;
	
	printf("Enter the value of number:");
	scanf("%d",&number);
	
	int x =1;
	while(x<=number)
	{
		factorial= factorial* x;
		x++;
	}
	printf(" %d",factorial);
}