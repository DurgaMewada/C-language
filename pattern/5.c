//		5
//		45
//		345
//		2345
//		12345

#include<stdio.h>
main()
{
	int a,b;
	
	for(a=5;a>=1;a--)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}