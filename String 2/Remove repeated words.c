// 4.write a c program to remove all repeted character in string.

#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	
	puts("Enter the string :");
	gets(a);
	
    puts("\nAfter removing repeated letter:");
	int i,j;
	int length =strlen(a);
	for(i=0; i<length; i++)
	{
		   for(j=i+1; j<length; j++)
		   {
			   if(a[i] == a[j])
			   {
				   a[j]=0;
			   }
		   }
		   if(a[i]!=0)
		   {
		   	    printf("%c",a[i]);
		   }
		   
    }
}