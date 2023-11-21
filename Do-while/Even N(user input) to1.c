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
		if(a%2==0)
		{
		  printf("%d ",a);	
		}
		a--;
	}while(a>=b); 
	
}