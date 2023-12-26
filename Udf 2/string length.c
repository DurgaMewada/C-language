//   Write a Program to find the length of the String by passing a string as an argument using UDF

#include<stdio.h>
#include<conio.h>
int stringinput()
{
	int a[100];
	puts("Enter any word to find out the length of its ");
	gets(a);
	
	
	int length=strlen(a);
	printf("Length of this string is = %d",length);

}
main()
{
	stringinput();
}