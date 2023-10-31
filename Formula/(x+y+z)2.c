#include<stdio.h>
#include<conio.h>
main()
{
	//(x+y+z)2=(xx)+(yy)+(zz)+2(x+y)(y+z)(z+x)
	
	int x,y,z;
	int ans;
	
	printf("(x+y+z)2=?\n");
	
	printf("Enter the value of X:");
	scanf("%d",&x);

	printf("Enter the value of Y:");
	scanf("%d",&y);
	
	printf("Enter the value of Z:");
	scanf("%d",&z);
	
	ans=(x*x)+(y*y)+(z*z)+(2*((x+y)*(y+z)*(z+x)));
	printf("Answer of this formula is %d",ans);
	
	
	
}