// WAP to find maximum from 2 digit using ternery operter

#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	printf("Enter value of A:");
	scanf("%d",&a);
	
	printf("Enter value of B:");
	scanf("%d",&b);	
	
	//if(a>b)------------else
	(a>b)?printf("A is maximum"):printf("B is maximum");
}