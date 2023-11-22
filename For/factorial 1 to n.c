//WAP to print to factorial between 1 to n using for loop

#include<stdio.h>
#include<conio.h>

main()
{
	int a=1;
	int sum=1;
	int b;
	printf("Enter the Value to end this loop:");
	scanf("%d",&b);
	
	for(a;a<=b;a++)
	{
		sum=sum*a;	
	}
	printf("%d",sum);
	
	
}