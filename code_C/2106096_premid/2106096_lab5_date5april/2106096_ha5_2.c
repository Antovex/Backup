/*Author : Antarin Ghosal
Program : WAP to find out the second largest element stored in an array of 20
 integers.*/


#include<stdio.h>

int main(){
    int s[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,19,20};
    int i,max,max2,n=20;

    for(i=0;i<20;i++){
        if(s[i]>s[i+1]){
            max=i-1;
        }
        else if (s[i+1]>s[i]){
            max=i;
        }
    }

    s[max]=0;

    for(i=0;i<20;i++){
        if(s[i]>s[i+1]){
            max2=i-1;
        }
        else if (s[i+1]>s[i]){
            max2=i;
        }
    }

    printf("The second largest element : %d",s[max2-2]);

    return 0;
}