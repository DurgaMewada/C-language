//10.WAP to print the multiplication table of n using while loop

#include<stdio.h>

main()
{
	int a;
	int b=1;
	
	printf("Enter the value to show multiplication table of number:");
	scanf("%d",&a);
	
	while(b<=10)
	{
		printf("%d * %d = %d\n",a,b,a*b);
		b++;
	}
}