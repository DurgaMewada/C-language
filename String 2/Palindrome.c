// 2.write a c program to check whether a string is palindrome or not

#include<stdio.h>
#include<string.h>
main()
{
	char palindrome[50];
    printf("Enter the string :");
    gets(palindrome);
    
    int i,check=0,length=strlen(palindrome),j=length-1;
    
    for(i=0 ;i<length ; i++)
    {
    	if(palindrome[i] != palindrome[j])
    	{
    		check=1;
		}
		j--;
	}
	if(check==1)
	{
		printf("String is not palindrome");
	}
	else
	{
		printf("String is palindrome");
	}
}