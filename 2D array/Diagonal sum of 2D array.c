//Write a Program to find the sum of diagonal elements from a given 2D array.

#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the row of array:");
	scanf("%d",&x);
	printf("Enter the column of array:");
	scanf("%d",&y);
	
	int a[x][y],sum=0;
	
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		    printf("Enter a[%d][%d]:",i,j);
	        scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
	        printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
	        if(i==j)
	        {
	        	sum=sum+a[i][j];
			}
		}
	}
	printf("sum is:%d",sum);
}