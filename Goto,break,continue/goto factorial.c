//WAP to find the n number factorial without a loop. (using a goto statement).

#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n,factorial=1;
	
	printf("Enter the value to end loop:");
	scanf("%d",&n);
	
	again:
		
		factorial=factorial*a;
		a++;
	
	if(a<=n)
	{
		goto again;
	}
	printf("Factorial of all number = %d",factorial);
}