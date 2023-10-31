#include<stdio.h>
#include<conio.h>
main()
{
	//(x+y)2=x*x+2xy+y*y
	
	int x,y;
	int ans;
	
	printf("(x+y)2=?\n");
	
	printf("Enter the value of X:");
	scanf("%d",&x);

	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	ans=(x*x)+(2*x*y)+(y*y);
	printf("Answer of this formula is %d",ans);
	
	
	
}