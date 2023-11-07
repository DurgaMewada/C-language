//W=P to create/simulate telecom call service conversation scenario using nested switch case.

#include<stdio.h>
#include<conio.h>

main()
{
	
	int call,language,issue,problem;
	
	printf("\nSDsons customer service\n");
	
	printf("Recieve or End:");
	scanf("%d",&call);
	 
	 switch(call)
	 {
	 	case 0:printf("Call ended");break;
	 	case 1:printf("Select your language!:\n");
	 	      printf("1.Hindi\n");
	 	      printf("2.English\n");
	 	      
	 	     scanf("%d",&language);
			
	    switch(language)
		{
			case 1:printf("Aap ki kya sahayata kar skte hai ham?\n");
				   printf("(1)Order dene ke liye is no. pe call kare:5698473909\n");
	 	       	   printf("(2)sikayat karne ke liye is no. par:8790674598\n");
	 	       	   
	 	       	   printf("kipira utar de:");
	 	       	   scanf("%d",&issue);
	 	       	   
	 	       	   switch(issue)
	 	       	   {
	 	       	   	 case 0:printf("Aap ka order confirm ho gya h");
	 	       	   	 break;
	 	       	   	 case 1:printf("Aap ki sikayat par ham kam kare ge ..Dhaniyvad :)");
	 	       	   	 break;
				   }
	 	 	break;			
		    case 2:printf("How can i help you?\n");
	 		 		printf("(1)To place an order make a call on this no.:5698473909\n");
	        		printf("(2)For complain make a call on this no.:8790674598\n");
	        		
	        		printf("Please tell us :");
	 	       	   scanf("%d",&problem);
	 	       	   
	 	       	   switch(problem)
	 	       	   {
	 	       	   	 case 0:printf("Your order has been placed");
	 	       	   	 break;
	 	       	   	 case 1:printf("We will take action towards your complian... thank you :)");
	 	       	   	 break;
				   }
			break;
    	}  
 
			
      }
	    	   
 	
	 
}