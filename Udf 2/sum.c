// sum of n using recusrion

int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a + sum(a-1);
}

void main()
{
	int a;
	printf("Enter number for sum = ");
	scanf("%d",&a);
	
	printf(" sum = %d",sum(a));
}