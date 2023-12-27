// Factorial of n using recusrion

int factorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a * factorial(a-1);
}

void main()
{
	int a;
	printf("Enter number for factorial = ");
	scanf("%d",&a);
	
	printf(" factorial %d",factorial(a));
}