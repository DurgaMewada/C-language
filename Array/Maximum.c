//Write a program to find maximum in 1d array 

#include<stdio.h>
main()
{
	int n,i,j,x;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			x=a[i];
		}
	}
	}
	printf("maximum value is:%d",x);
}

