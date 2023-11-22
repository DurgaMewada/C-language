//WAP to print leapyear using for loop

#include<stdio.h>
#include<conio.h>
main()
{
	int startingYear=2000;
	int endingYear=3000;
	
	for(startingYear;startingYear<=endingYear;startingYear+=4)
	{
		printf("%d ",startingYear);
		
	}
	
}