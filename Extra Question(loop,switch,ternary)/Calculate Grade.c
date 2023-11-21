// wap to calculate students grade.

#include<stdio.h>
#include<conio.h>

main()
{
	int percentage;
	printf("Enter your Percentage to calculate Grade : ");
	scanf("%d",&percentage);//user input
	
	if(percentage<=100 && percentage>=90)
	{
		printf(" Your Grade is A "); 
	}
	else if(percentage<90 && percentage>=80)
	{
		printf(" Your Grade is B ");
	}
	else if(percentage<80 && percentage>=70)
	{
		printf(" Your Grade is C ");
	}
	else if(percentage<70 && percentage>=60)
	{
		printf(" Your Grade is D ");
	}
	else if(percentage<60 && percentage>=50)
	{
		printf(" Your Grade is E ");
	}
	else 
	{
		printf(" Your Grade is F ");
	}
	
}