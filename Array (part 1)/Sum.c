// 2. WAP to find the sum of a 1D array

#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	
    int a[n];
    int i;
    int sum=0;
    
    for(i=0; i<n; i++)
    {
    	printf("Enter value a[%d] = ",i);
    	scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
    	sum=sum + a[i];
    }
    printf("%d",sum);
 
}