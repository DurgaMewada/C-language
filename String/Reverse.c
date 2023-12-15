//4. WAP to given string in reverse.


#include<stdio.h>
main()
{
	int n;
	int i;
    printf("Enter the value to create an string : ");
    scanf("%d",&n);
    
	char a[n];
	printf("Enter input :");	
	scanf("%s",&a);
	
	printf("String in reverse:\n");
	
	for(i=n; i>=0; i--)
	{
		printf("%c",a[i]);
	}
	

}