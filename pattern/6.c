//		5
//		44
//		333
//		2222
//		11111

#include<stdio.h>
main()
{
	int a,b;
	
	for(a=5;a>=1;a--)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}