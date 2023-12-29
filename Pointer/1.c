#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array = ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr=&a[n];
	int i;
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",*ptr);
		ptr-=1;
	}
}