//WAP to print sum 1 to n using while loop

#include<stdio.h>

main()
{
	int a=1;
	int sum=0;
	int b;
	printf("Enter the Value to end this loop:");
	scanf("%d",&b);
	
	while(a<=b)
	{
		sum=sum+a;
		a++;
		
	}
	printf("%d",sum);
	
	
}