#include<stdio.h>
main()
{
	char i,j,space;
	
	for(i='E';i>='A';i--)
	{
		for(space=i;space<'E';space++)
		{
			printf(" ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}