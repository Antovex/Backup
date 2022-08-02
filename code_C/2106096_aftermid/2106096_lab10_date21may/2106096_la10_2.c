/*Author : Antarin Ghosal
Program : WAP to add two distances (in km-meter) using structures.*/


#include<stdio.h>

struct add_dist
{
    int km;
    float m;
}d1,d2;


int main(){

    int addkm;
    float addm;

    printf("Enter the First distance : ");
    scanf("%d %f",&d1.km,&d1.m);

    printf("Enter the Second distance : ");
    scanf("%d %f",&d2.km,&d2.m);

    addm=d1.m+d2.m;
    addkm=d1.km+d2.km;

    if((d1.m+d1.m)>100){
        addm-=100;
        addkm++;
    }

    printf("The Added distance is : %d km & %.2f m",addkm,addm);

    return 0;
}