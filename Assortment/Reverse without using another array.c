//8. Wap to find the reverse array without using another array.

#include<stdio.h>
main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int i,j;
	int a[n];

	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
	   {
		  a[n]=a[i];
		  a[i]=a[j];
		  a[j]=a[n];
	   }	
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}