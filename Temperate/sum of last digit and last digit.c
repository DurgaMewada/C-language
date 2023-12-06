//Write C program to find sum of first and last digit of a number

#include<stdio.h>
#include<conio.h>
main()
{
	int number;
	int firstDigit,lastDigit;
	
	printf("Enter any number ");
	scanf("%d",&number);
	
	lastDigit=number%10;
	while(number>0)
	{
		firstDigit=number;
		number=number/10;
	}
	printf("sum of First digit and Last digit:");
	printf("%d + %d = %d",firstDigit,lastDigit,firstDigit+lastDigit);

	
}