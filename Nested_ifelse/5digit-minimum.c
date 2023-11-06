//WAP to Find minimum from 5 digit using nested if else

#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter the value of A:");
	scanf("%d",&a);
	
	printf("Enter the value of B:");
	scanf("%d",&b);
	
	printf("Enter the value of C:");
	scanf("%d",&c);
	
	printf("Enter the value of D:");
	scanf("%d",&d);
	
	printf("Enter the value of E:");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					//a
					printf("a is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					//b
					printf("b is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					//d
					printf("d is minimum");
				}
				else
				{
					//e
					printf("e is minimum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
}
