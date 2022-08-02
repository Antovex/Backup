/*Author : Antarin Ghosal
Program : WAP to arrange the numbers stored in the array so that it will display
 first all odd numbers,then even numbers.*/


#include<stdio.h>

int main(){
    int i,n,s[]={1,2,3,4,5,6,7,8,9,10};

    
    for(i=0;i<10;i++){
        if (s[i]%2==0)
            printf(" Even %d \n",s[i]);
    }

    for(i=0;i<10;i++){
        if (s[i]%2==1)
            printf(" Odd %d \n",s[i]);
    }


    return 0;
}