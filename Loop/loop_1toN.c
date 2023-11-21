//WAP to print 1 to n(user input) using while loop

#include<stdio.h>
main()
{
	int a=1,b;
	printf("Enter Number to end loop:");
	scanf("%d",&b);
	
	while(a<=b)
	{
		printf("%d ",a);
		a++;
	}
}