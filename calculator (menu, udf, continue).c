int input()
{
	int num1,num2;
	printf("Enter number 1 to calculate something : ");
	scanf("%d",&num1);
	
	printf("Enter number 2 to calculate something : ");
	scanf("%d",&num2);
}

int sum()
{
	int num1,num2;
	printf("Sum of numbers : %d",num1+num2);
}

int sub()
{
	int num1,num2;
	printf("Subtraction of number : %d",num1-num2);
}

int multi()
{
	int num1,num2;
	printf("Multiplication of numbers : %d",num1*num2);
}

int div()
{
	int num1,num2;
	printf("Divisible of numbers : %d",num1/num2);
}

int mod()
{
    int num1,num2;
	printf("Reminder of numbers : %d",num1%num2);	
}


int cal()
{
	
	int n;
	start:
	printf("\n\nEnter symbol according to following option:\n");
	printf("Press 1 for +\n");	
	printf("Press 2 for -\n");	
	printf("Press 3 for *\n");	
	printf("Press 4 for /\n");	
	printf("Press 5 for reminder \n");	
	scanf("%d",&n);
	
	input();
	printf("\n");
		
	switch(n)
	{
		case 1: sum();
		goto start;
		case 2: sub();
		goto start;
		case 3: multi();
		goto start;
		case 4: div();
		goto start;
		case 5: mod();
		goto start;
		default : printf("Entry only mathematical operator : (+,-,*,/)");
		goto start;
	}
	
	printf("\n\n");
	
}

main()
{
	int x;
	printf("Enter '1' to start calculator & '0' to end calculator \n",x);
	scanf("%d",&x);
	
	if(x!=0)
	{
		cal();
		printf("\n");
	}
    printf("End of calculater");
}