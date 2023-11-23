//WAP to find the sum of n numbers using the goto statement

#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n,sum=0;
	
	printf("Enter the value to end loop:");
	scanf("%d",&n);
	
	again:
		
		sum=sum+a;
		a++;
	
	if(a<=n)
	{
		goto again;
	}
	printf("sum of all number = %d",sum);
}