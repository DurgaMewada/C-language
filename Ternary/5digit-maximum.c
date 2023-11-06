// WAP to find maximum from 5 digit using ternery operter

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter the value of A:");
	scanf("%d",&a);
	
	printf("Enter the value of B:");
	scanf("%d",&b);
	
	printf("Enter the value of C:");
	scanf("%d",&c);
	
	printf("Enter the value of D:");
	scanf("%d",&d);
	
	printf("Enter the value of E:");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(b>c)?(b>d)?(b>e)?printf("b is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum");(a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(b>c)?(b>d)?(b>e)?printf("b is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum");
}