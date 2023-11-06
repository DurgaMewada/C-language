#include<stdio.h>
#include<conio.h>

main()
{
	int GrossSalary,BaseSalary,HRA,DA,TA;
	
	printf("Enter value of Base Salary:");
	scanf("%d",&BaseSalary);
	
	printf("Enter value of HRA:");
	scanf("%d",&HRA);
	
	printf("Enter value of DA:");
	scanf("%d",&DA);
	
	printf("Enter value of TA:");
	scanf("%d",&TA);
	
    GrossSalary=BaseSalary+HRA+DA+TA;
	
	 printf("Gross salary is: %d\n",GrossSalary);
}