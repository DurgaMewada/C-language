//WAP to check number is divisible by 7 or not using ternary

#include<stdio.h>
#include<conio.h>

main()
{
	int num;
	printf("Enter the number to check number is Divisible by 7 or not : ");
	scanf("%d",&num);
	
	(num%7==0)?printf("Your number is Divisible by 7"):printf("Your number is not Divisible by 7");
}