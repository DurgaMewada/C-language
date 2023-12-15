//3. WAP to given string length.

#include<stdio.h>
main()
{ 
    int i,n;
    printf("Enter the value to create an string : ");
    scanf("%d",&n);
    
	char a[n];
	printf("Enter input :");	
	scanf("%s",&a);

    int length=0;
    for(i=0; a[i]!=0; i++)
    {
    	length++;	
    }
    
	printf("%d",length);
	
}