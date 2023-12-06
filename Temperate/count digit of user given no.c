//WAP to count digit in number;

#include<stdio.h>
#include<conio.h>
main()
{
	int x,count=0;
	
	printf("Enter the number ");
	scanf("%d",&x);
	
	while(x>0)
	{
		x=x/10;
		count++;
	}
	printf("Digit is this number is %d",count);
}
