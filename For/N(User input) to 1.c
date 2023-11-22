//WAP to N(user input) to 1 using for for loop

#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n;
	
	printf("Enter the value to start loop:");
	scanf("%d",&n);
	
	for(n;n>=a;n--)
	{
		printf("%d ",n);
	}
}