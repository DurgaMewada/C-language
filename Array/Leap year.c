//Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.


#include<stdio.h>

main()
{
	int first;
	printf("Enter your first year : ");
	scanf("%d",&first);
	
	int second;
	printf("Enter your second year : ");
	scanf("%d",&second);
	
	int i;
	int a[first];
	
	for(i=first ; i<=second ; i++)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
	}
}