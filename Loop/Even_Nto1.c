//WAP to print even number for N(User input) to 1 using loop

#include<stdio.h>
main()
{
	int a=1,b;
	printf("Enter Number to start loop:");
	scanf("%d",&b);
	
	while(a<=b)
	{
	   if(b%2==0)
	   {
	      printf("%d ",b);
		  
	   }
	   b--;		
	}
}