/*Author : Antarin Ghosal
Program : WAP to add two times (in hr-min-sec) by passing structure to a function.*/


#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;
}t1,t2;

int main(){

    int hour,minu,secs;

    printf("Enter First time : ");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);

    printf("Enter Second time : ");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);

    hour = t1.hr+t2.hr;
    minu = t1.min+t2.min;
    secs = t1.sec+t2.sec;

    if((t1.sec+t2.sec)>59){
        minu++;
        secs-=60;
    }

    if((t1.min+t2.min)>59){
        hour++;
        minu-=60;
    }

    printf("The Added time is : %d %d %d",hour,minu,secs);

    return 0;
}