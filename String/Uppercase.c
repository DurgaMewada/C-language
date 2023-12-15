//2. WAP to convert given string in uppercase

#include<stdio.h>
main()
{
	int n;
	printf("Enter the value to create an string : ");
	scanf("%d",&n);
	
	char a[n];
	printf("Enter name :");	
	scanf("%s",&a);
	
	 int length=strlen(a);
	 
	int i;
	for(i=0; i<length; i++)
	{
	   if(a[i]>='a'&&a[i]<='z')
          {
            a[i]=a[i]-32;
          }
        }
        printf("%s",a);
	
}