/*Author : Antarin Ghosal
Program : WAP to print the following pattern for n rows. Ex. for n=6 rows
0
1 0
0 1 0
1 0 1 0
0 1 0 1 0
1 0 1 0 1 0*/


#include <stdio.h>

int main()
{
    int i,j,n,p,q;
    printf("Input number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        { 
            p=1;q=0;
        }
        else
        { 
            p=0;q=1;
        }
        for(j=1;j<=i;j++){
	        if(j%2==1)
	            printf("%d",p);
	        else
	            printf("%d",q);
        }
        printf("\n");
    }
}