//10. Wap to find sum of anti diagonal element in 2d array.

#include<stdio.h>
main()
{
	int i,j;
	int n;
	printf("Enter size of first array: ");
	scanf("%d",&n);
	int m;
	printf("Enter size of second array :");
	scanf("%d",&m);
	int a[n][m];
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter value a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf(" %d",a[i][j]);
		
		}
		printf("\n");
	}
	int sum=0;
	j=m-1;
	for(i=0; i<n; i++)
	{
     sum=sum+a[i][j];	
		j--;	
	}
	printf("sum is :%d",sum);
	
}