//		Q.2 Write a Program to find the average of a 1D array.
//		For example,
//		Input:
//		Enter array size: 5
//		Enter array elements:
//		a[0] = 12
//		a[1] = 42
//		a[2] = 18
//		a[3] = 50
//		a[4] = 26

//		Output:
//		Average of an Array: 29.6

#include<stdio.h>
main()
{
	int n;
	printf("Enter the value to create an array :");
	scanf("%d",&n);
    int a[n];
    int i;
    int sum=0;
    for(i=0; i<n; i++)
    {
    	printf("Enter a[%d]= ",i);
    	scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
    	sum=sum + a[i];
    }
    printf("Average of array is %d",sum/n);
 
}