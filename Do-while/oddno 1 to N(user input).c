#include<stdio.h>
#include<conio.h>
main()
{
	int a=1;
	int b;
	
	printf("Enter the value to end loop:");
	scanf("%d",&b);
	
	do
	{
		printf("%d ",a);
		a=a+2;
	}while(a<=b); 
	
}