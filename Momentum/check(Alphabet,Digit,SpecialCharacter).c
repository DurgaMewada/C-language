//WAP to check whether it is alphabet, digit or special character.

#include<stdio.h>

main()
{
	char character;
	printf(" Enter the character: ");
	scanf("%c",&character);
	
	if(character>=65 && character<=90 || character>=97 && character<=122)
	{
		printf("This character is Alphabet");
	}
			
	else if(character>=48 && character<=57)
	{
		printf("This character is Digit");
	} 
	
	else if(character>=33 && character<=47 || character>=58 && character<=64)
	{
		printf("This character is Special Character");
	} 
	
}
