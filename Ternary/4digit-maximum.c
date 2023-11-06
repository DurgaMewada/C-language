// WAP to find maximum from 4 digit using ternery operter

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter the value of A:");
	scanf("%d",&a);
	
	printf("Enter the value of B:");
	scanf("%d",&b);
	
	printf("Enter the value of C:");
	scanf("%d",&c);
	
	printf("Enter the value of D:");
	scanf("%d",&d);

 (a>b)?(a>c)?(a>d)?printf("a is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum"):(b>c)?(b>d)?printf("b is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum");
			
}