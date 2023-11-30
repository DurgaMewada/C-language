#include<stdio.h>
main()
{
	char i,j,space;
	
	for(i='A';i<='E';i++)
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