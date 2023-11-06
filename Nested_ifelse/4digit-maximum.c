//WAP to find minimum from 4 digit by using nested if else


#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter value of A:");
	scanf("%d",&a);
	
	printf("Enter value of B:");
	scanf("%d",&b);	
	
    printf("Enter value of C:");
	scanf("%d",&c);
	
	printf("Enter value of D:");
	scanf("%d",&d);
	
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				//a
				printf("A is maximum");
			}
			else
			{
				//d
				printf("D is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("C is maximum");
			}
			else
			{
				//d
				printf("D is maximum");
			}
		}
		
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			if(b>d)
			{
				//b
				printf("B is maximum");
			}
			else
			{
				//d
				printf("D is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("C is maximum");
			}
			else
			{
				//d
				printf("D is maximum");
			}
		}
	}
}
	