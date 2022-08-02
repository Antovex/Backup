/*Author : Antarin Ghosal
Program : WAP to form reverse pyramid of numbers for a given number. Ex. for
number 4
	1 2 3 4 3 2 1
	  1 2 3 2 1
		1 2 1
		  1.
*/


#include<stdio.h>

int main(){

    int num,i,j;
    printf("Enter the number of Rows : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
    printf("\n");
        for(j=1;j<i;j++){
            if (j<=num)
                printf("%d",j);
            else
                printf("%d",j--);
        }
    }

    return 0;
}