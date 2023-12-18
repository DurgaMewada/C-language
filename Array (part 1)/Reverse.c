//5. Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<=n; i++)
	{
      printf("Enter value a[%d] = ",i);
      scanf("%d",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	 
}