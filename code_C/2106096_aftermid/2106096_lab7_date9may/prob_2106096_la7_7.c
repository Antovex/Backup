/*Author : Antarin Ghosal
Program : WAP to compute the cosine series using function.
cos(x)=1-x^2/2!+x^4/4!-x^6/6!+ ……..*/


#include<stdio.h>
#include<math.h>

int cosi();
int fact();

int main(){
    int x,res;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    res = cosi(x);

    printf("The answer is : %d",res);

    return 0;
}

int cosi(int ex){
    int i,res2=0,temp=0;

    for(i=1;i<=100;i++){
        res2+=((pow(-1,i))*(pow(ex,i*2)))/fact(i*2);
    }

    return res2;
}

int fact(int num){
    int temp=1,i;
    
    for(i=1;i<=num;i++){
        temp*=i;
    }
    
    return temp;
}