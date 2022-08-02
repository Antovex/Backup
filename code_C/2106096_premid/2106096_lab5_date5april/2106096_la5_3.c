/*Author : Antarin Ghosal
Program : WAP to find out the largest even integer stored in the array of n
integers. n is the user input.*/


#include<stdio.h>

int main(){
    int n[100],i,num,j,largest;

    printf("Enter the amount of numbers we want to input : ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("Enter a number : ");
        scanf("%d",&n[i]);
    }

    largest = n[0];
    for(i=0;i<num;i++){
        if (n[i]%2==0 && n[i]>largest){
                    largest=n[i];
            }
    }

    printf("The largest number is : %d",largest);

    return 0;
}