//WAP to find minimum from 3 digit by using nested if else

#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	
	printf("Enter value of A:");
	scanf("%d",&a);
	
	printf("Enter value of B:");
	scanf("%d",&b);	
	
    printf("Enter value of C:");
	scanf("%d",&c);
	
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("A is Minimum");
		}
		else
		{
			//c
			printf("C is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("B is minimum");
		}
		else
		{
			//c
			printf("C is minimum");
		}
	}	
}