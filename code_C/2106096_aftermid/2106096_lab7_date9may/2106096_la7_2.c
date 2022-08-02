/*Author : Antarin Ghosal
Program : WAP to find out ncr factor by using a user defined function for factorial (say fact).*/


#include<stdio.h>
#include<math.h>

int fact();
int ncr();

int main(){
    int n,r,result;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);

    result = ncr(n,r);

    printf("Answer : %d",result);

    return 0;
}

int fact(int num){
    int temp=1,i;
    
    for(i=1;i<=num;i++){
        temp*=i;
    }
    
    return temp;
}

int ncr(int n,int r){
    int res;

    res = (fact(n)/(fact(n-r)*fact(r)));

    return res;
}