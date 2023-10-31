#include<stdio.h>
#include<conio.h>
main()
{
	//(x-y)3=X³ – Y³ – 3X²Y + 3XY²
	
	int x,y;
	int ans;
	
	printf("(x-y)3=?\n");
	
	printf("Enter the value of X:");
	scanf("%d",&x);

	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	ans=(x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y);
	printf("Answer of this formula is %d",ans);
	
	
	
}