// WAP to demonstrate the use of continue keywords

#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=10,n;
	
	printf("Enter the number where you want to continue squeance between 1 to 10:");
	scanf("%d",&n);
	
	for(a=1;a<=b;a++)
	{ 
		if(a==n)
		{
			 continue;
		}
		printf("%d ",a);
	}
}