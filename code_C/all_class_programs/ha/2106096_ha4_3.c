/*Author : Antarin Ghosal
Program : WAP to form reverse pyramid of numbers for a given number. Ex. for
number 4
	1 2 3 4 3 2 1
	  1 2 3 2 1
		1 2 1
		  1.
*/


#include <stdio.h>
int main()
{
    int i,j,rows,space=0;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
    for(i=rows;i>=1;i--)
	{   
        for(j=1;j<=space;j++)
        printf(" ");
            for(j=1;j<=i;j++)
        printf("%d ",j);
            for(j=i-1;j>=1;j--)
        printf("%d ",j);
        printf("\n");
    	space++;
    	space++;
    }
    return 0;
}