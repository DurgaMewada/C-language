// Write a program to arrange 1D array in ascending order

#include <stdio.h>

main ()
{
        int n;
        printf("Enter the size of array to create in array : ");
        scanf("%d", &n);
        
        int number[n];
        int i,j;
        for (i=0; i<n; i++)
        {
        	   printf("a[%d]: ",i);
        	   scanf("%d", &number[i]);
		}
	      
        int a;
        for (i=0; i<n; i++) 
        {
            for (j =i+1; j<n; j++) 
            {
                if (number[i] > number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("\n");
        printf("Ascending order ");
        for (i= 0; i< n; ++i) 
        {
            printf("%d ", number[i]);
        }
 
    }
