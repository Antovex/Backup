/*Author : Antarin Ghosal
Program : WAP to swap first element with last, second element with second last and
 so on, stored in an array.*/


#include<stdio.h>

int main(){
    int s[]={1,2,3,4,5},temp,i,n=5;

    for(i=0;i<5/2;i++){
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }

    for(i=0;i<5;i++){
        printf("%d ",s[i]);
    }

    return 0;
}