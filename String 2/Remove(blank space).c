// 3.write a c program to remove space , blanks from a string.

#include<stdio.h>
#include<string.h>

main()
{
     char remove[50];
	 printf("Enter the name : ");
	 gets(remove);
	 
	 puts(remove);
	 printf("\n");	
	 puts("After remove blank space from a string:");
    
	 
	 int i,j;
	 int length=strlen(remove);
	 
	 for(i=0;i<length;i++)
	 {
	 	if(remove[i]==' ')
	 	{
	 		remove[i]=remove[i+1];
	 		i++;
	 		
		 } printf("%c",remove[i]);
	 }
}