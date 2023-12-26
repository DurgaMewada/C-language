// Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.

#include<stdio.h>

int inputarray()
{
	int n;
	printf("Enter size of array = ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum;
	for(i=0;i<n;i++)
	{
		printf("Enter value a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of all element is %d",sum);
	
}

main()
{
  inputarray();	
}