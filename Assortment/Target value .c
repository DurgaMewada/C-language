//6. Write a program in C to find a pair of target value given by user.

#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int i,j;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("Enter value :");
	scanf("%d",&x);
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]+a[j]==x)
			{
				printf("%d,%d\n",a[i],a[j]);
			}
		
		}
	}
}