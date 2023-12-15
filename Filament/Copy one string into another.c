// 4. Copy one string into another 

#include<stdio.h>
#include<string.h>

main()
{
    char a[100]; 
    printf("Enter  the string : ");
    gets(a);
    
    int i;
    char b[100];
    int length=strlen(a);
    for(i=0; i<length; i++)
    {
    	b[i]=a[i];
	}
	printf("\nFirst string (which user has given) = %s\n",a);
	printf("Second string (by coping )          = %s",b);
 
}