/*Author : Antarin Ghosal
Program : WAP to print the following pattern.
A
B A
C B A
D C B A
E D C B A
*/


#include<stdio.h>

int main(){
    int num,i,j,temp=0;
    char ch='A';
    printf("Enter the number of Rows : ");
    scanf("%d",&num);

    for(i=0;i<=num;i++){
    printf("\n");
        for(j=0;j<=i;j++){
            temp=i;
            temp-=j;
            printf("%c ",ch+temp);
        }
    }

    return 0;
}