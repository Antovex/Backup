/*Author : Antarin Ghosal
Program : WAP to find the median of a list of numbers.*/


#include<stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7},n=6,median;

    if ( n % 2 == 0)
        median = (a[n/2] + a[n/2+1])/2.0 ;
    else
    median = a[n/2 + 1];

    printf("%d ",median);

    return 0;
}