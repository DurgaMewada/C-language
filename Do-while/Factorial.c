#include<stdio.h>
#include<conio.h>

main()
{
	int a=1;
	int sum=1;
	int b;
	printf("Enter the Value to end this loop:");
	scanf("%d",&b);
	
	do
	{
		sum=sum*a;
		a++;
		
	}while(a<=b);
	printf("%d",sum);
	
	
}