//WAP to find leap year for 2 number using while loop

#include<stdio.h>
main()
{
	int startingYear=2000;
	int endingYear=3000;
	
	while(startingYear<=endingYear)
	{
		printf("%d ",startingYear);
		startingYear+=4;
	}
	
	
}