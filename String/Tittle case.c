//6. WAP to convert given string in Title Case.

#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	printf("Enter input : ");
	gets(a);
	
	int lent=strlen(a);
	
	if(a[0]>='a' && a[0]<='z')
	{
		a[0]=a[0]-32;
	}
	
	int i;
	for(i=1; i<lent;i++)
	{
		if(a[i-1]==' ')
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	puts(a);
}