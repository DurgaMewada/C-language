#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int b=1;
	
	printf("Enter the value to start loop:");
	scanf("%d",&a);
	
	do
	{
		printf("%d ",a);
		a--;
	}while(a>=b); 
	
}