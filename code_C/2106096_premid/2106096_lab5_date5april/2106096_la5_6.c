/*Author : Antarin Ghosal
Program : WAP to display the array elements in reverse order.*/


#include<stdio.h>

int main(){
    int s[]={1,2,3,4,5};

    for(int i=4;i>=0;i--){
        printf("%d ",s[i]);
    }
    return 0;
}