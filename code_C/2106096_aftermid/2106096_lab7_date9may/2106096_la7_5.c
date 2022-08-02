/*Author : Antarin Ghosal
Program : WAP to generate all the prime numbers between 1 and n by using a user defined 
function (say isPRIME) to be used for prime number testing, where n is a value supplied by
 the user.*/


#include<stdio.h>

void isPRIME();

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("All the prime numbers from 1 to n are : ");

    isPRIME(n);

    return 0;
}

void isPRIME(int num){
    int i,n,count;

    for(n = 1;n<=num;n++){
            count = 0;

            for(i=2;i<=n/2;i++){
                if(n%i==0){
                    count++;
                    break;
            }
        }

        if(count==0 && n!= 1)
            printf("%d ",n);
        }
}