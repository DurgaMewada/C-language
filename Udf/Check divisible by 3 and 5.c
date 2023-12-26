//  Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF

#include<stdio.h>
int input()
{
	int number;
	printf("Enter value to find out the number  = ");
	scanf("%d",&number);
	return number;
}
 
int check()
{
	int number=input();
	int check;
	
	if(number%5==0 && number%3==0)
	{
			printf("Your number is divisible by both 3 and 5");
	}
	else if(number%5==0 || number%3==0)
	{
		if(number%3==0)
		{
			printf("Your number is divisible by 3");
		}
		else
		{
			printf("Your number is divisible by 5");
		}
		
	}
	else
	{
		printf("Your number is not divisible by both 3 and 5");
	}
	
}

main()
{
	check();
}