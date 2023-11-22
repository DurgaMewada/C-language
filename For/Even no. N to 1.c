//WAP to print even no. from N(user input) to 1 using for loop

#include<Stdio.h>
#include<conio.h>
main()
{
	int a,n;
	
	printf("Enter the value to end loop:");
	scanf("%d",&n);
	
	for(a=1;n>=a;n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}