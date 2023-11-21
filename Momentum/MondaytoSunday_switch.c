   // Write C program use switch statement Display Monday to Sunday.
  //    Ex. User Input: M
  //    Output: Monday

#include<stdio.h>
#include<conio.h>

main()
{
	
	char x;
	printf("Enter the days of the week :");
	scanf("%c",&x);
	
	switch(x)
	{ 
	  case'M':printf("Monday");
	  break;
	  case'T':printf("Tuesday");
	  break;
	  case'W':printf("Wednesday");
	  break;
	  case't':printf("Thursday");
	  break;
	  case'F':printf("Friday");
	  break;
	  case'S':printf("Saturday");
	  break;
	  case's':printf("Sunday");
	  break;
	  default:printf("Enter valid input");
	}
}
