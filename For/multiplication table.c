//WAP to print multiplication table of n using for loop

#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n;
	printf("Enter the value to show multiplication table of number:");
	scanf("%d",&n);
	
	for(a;a<=10;a++)
	{
		printf("%d * %d = %d\n",a,n,a*n);	
	}
	
}