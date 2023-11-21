 //Write C program to find out max from 4 numbers using nested if
 
 #include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	 
	 printf("enter the value of a,b,c,d:");
	 scanf("%d%d%d%d",&a,&b,&c,&d);
	 	 
	
	if(a>b)
	{   //a,c,d
	
		if(a>c)
		{   //a,d
		
			if(a>d)
			{   //a 
				printf("a is maximum");
			}
			
			else
			{    //d
			    printf("d is maximum");
		    }
    	}
    
		else
		{ 
		    if(c>d)
		    {  //c
		    	printf("c is maximum");
			}
		    else
			{  //d
			    printf("d is maximum");
		    }
  	 	}
    }
	else
	{
		if(b>c)
		{  //b,d
		
			if(b>d)
		    {    //b
		    	printf("b is maximum");
			}
			else
			{   //d
				printf("d is maximum");
			}
    	}
    	
		else
		{
		   if(c>d)
		    {  //c
		    	printf("c is maximum");
			}
		    else
			{  //d
			    printf("d is maximum");
		    }
		}
			
	}   

}