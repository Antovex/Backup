/*Author : Antarin Ghosal
Program : WAP to generate the pascal triangle pyramid of numbers for a given 
number.
Ex. for number 4
	    1
	   1 1
	  1 2 1
	 1 3 3 1
	1 4 6 4 1.
*/


#include<stdio.h>

int main()
{
    int rows, n = 1, p, i, j;
    printf("\nEnter the number of rows :");
    scanf("%d",&rows);
    printf("\n");

    for(i=0; i<rows; i++)
    {
        for(p=1; p <= rows-i; p++){
            printf("  ");
        }
        for(j=0; j <= i; j++)
        {
        if (j==0 || i==0)
            n = 1;
        else
            n = n*(i-j+1)/j;
            printf("%4d", n);
        }
            printf("\n\n");
    }

    return 0;
}