//1.WAP to get & print 1D array of N elements.

#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
    	printf("Enter value a[%d] = ",i);
    	scanf("%d",&a[i]);
	}
    for(i=0; i<n; i++)
    {
	
		printf("%d ",a[i]);
	}
}