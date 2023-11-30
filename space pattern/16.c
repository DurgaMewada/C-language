#include<stdio.h>
main()
{
	char i,j,space;
	
	for(i='A';i<='E';i++)
	{
		for(space='A';space<i;space++)
		{
			printf(" ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}