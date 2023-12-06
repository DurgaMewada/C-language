//Write C program to print multiplication table of any number

#include<stdio.h>
#include<conio.h>
main()
{
	int a=1;
	int n;
	
	printf("Enter the number and it will show you multiplication table of it:");
	scanf("%d",&n);
	
	for(a;a<=10;a++)
	{
		printf("%d*%d=%d \n",n,a,n*a);
	}
}