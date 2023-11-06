#include<stdio.h>
#include<conio.h>

main()
{
	int Celsius,Fahrenheit;
	
	printf("Enter the value of Celsius:");
	scanf("%d",&Celsius);
	
	Fahrenheit=Celsius*(9/5)+(32);
	printf("Fahrenheit=%d",Fahrenheit);
	
}
