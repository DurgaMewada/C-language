#include<stdio.h>

main()
{
	int a;
	int b=1;
	
	printf("Enter the value to show multiplication table of number:");
	scanf("%d",&a);
	
	do
	{
		printf("%d * %d = %d\n",a,b,a*b);
		b++;
	}while(b<=10);
}