//WAP tomprint 1 to N(user input) using for loop

#include<stdio.h>
#include<conio.h>
main()
{
	int a,n;
	
	printf("Enter the value to End loop:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		printf("%d ",a);
	}
}