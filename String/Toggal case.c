//5. WAP to convert given string in Toggal Case.

#include<stdio.h>
main()
{
	int n;
	printf("Enter size to create a string :");
	scanf("%d",&n);
	
	char string[n];
	printf("Enter input to covert in toggal case : ");
	scanf("%s",&string);
	
	printf("Toggal Case\n");
	
	int i;
	
		if(string[0]>='a' && string[0]<='z')
		{
			string[0]=string[0]-32;
		}
		for(i=1;i<n;i++)
		{
			if(string[i]>='A' && string[i]<='Z')
	    	{
		    	string[i]=string[i]+32;
	    	}	
		}
		
		printf("%s",string);	
}