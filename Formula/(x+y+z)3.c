#include<stdio.h>
#include<conio.h>
main()
{
	//(x+y+z)3=(xxx)+(yyy)+(zzz)+3(x+y)(y+z)(z+x)
	
	int x,y,z;
	int ans;
	
	printf("(x+y+z)3=?\n");
	
	printf("Enter the value of X:");
	scanf("%d",&x);

	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	printf("Enter the value of Z:");
	scanf("%d",&z);
	
	ans=(x*x*x)+(y*y*y)+(z*z*z)+(3((x+y)*(y+z)*(z+x)));
	printf("Answer of this formula is %d",ans);
	
	
	
}