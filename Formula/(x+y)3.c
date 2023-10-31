#include<stdio.h>
#include<conio.h>
main()
{
	//(x+y)3=x³+3x²y+3xy²+y³
	
	int x,y;
	int ans;
	
	printf("(x+y)3=?\n");
	
	printf("Enter the value of X:");
	scanf("%d",&x);

	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	ans=(x*x*x)+(3*x*x*y)+(3*x*y*y+y*y*y);
	printf("Answer of this formula is %d",ans);
	
	
	
}