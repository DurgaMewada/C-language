//  Write a Program to find the cube of a given number using UDF

#include<stdio.h>
int input()
{
	int number;
	printf("Enter value to find out it's cube = ");
	scanf("%d",&number);
	return number;
}
int cube()
{
	int cube;
	int number=input();
	cube=number*number*number;
	printf("Cube of number is %d ",cube);
	
}
main()
{
    
	cube();
}
