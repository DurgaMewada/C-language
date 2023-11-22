//WAP to print odd no. from 1 to N(user input) using for loop

#include<Stdio.h>
#include<conio.h>
main()
{
	int a,n;
	
	printf("Enter the value to end loop:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a=a+2)
	{
		printf("%d ",a);
	}
}