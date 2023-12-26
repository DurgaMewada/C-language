// WAP crate calculator using menu driven system using UDF.


#include<stdio.h>
#include<conio.h>
#include<string.h>

int input()
{
	int num1,num2;
	printf("Enter number 1 to calculate something : ");
	scanf("%d",&num1);
	
	printf("Enter number 1 to calculate something : ");
	scanf("%d",&num2);
}

int sum()
{
	int num1,num2;
	printf("Sum of numbers : %d",num1+num2);
}

int sub()
{
	int num1,num2;
	printf("Subtraction of number : %d",num1-num2);
}

int multi()
{
	int num1,num2;
	printf("Multiplication of numbers : %d",num1*num2);
}

int div()
{
	int num1,num2;
	printf("Divisible of numbers : %d",num1/num2);
}


int cal()
{
	char ca;
	printf("Enter symbols (+,-,*,/) : ");
	scanf(" %c",&ca);
	
	input();
	printf("\n");
		
	switch(ca)
	{
		case '+': sum();
		break;
		case '-': sub();
		break;
		case '*': multi();
		break;
		case '/': div();
		break;
		default : printf("Entry only mathematical operator : (+,-,*,/)");
		break;
	}
	
}

main()
{
	cal();
}