// WAP to find maximum from 3 digit using ternery operter

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	
	printf("Enter the value of A:");
	scanf("%d",&a);
	
	printf("Enter the value of B:");
	scanf("%d",&b);
	
	printf("Enter the value of C:");
	scanf("%d",&c);
   
   (a>b)?(a>c)?printf("a is maximum"):printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
	
}