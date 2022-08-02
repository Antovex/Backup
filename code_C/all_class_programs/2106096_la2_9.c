/*Author : Antarin Ghosal
Program : WAP to add two times in hour, minitue & second format entered through the keyboard in the format hh:mm:ss*/


#include<stdio.h>

int main(){

    int t1hr,t1min,t1sec,t2hr,t2min,t2sec,day = 0;
    printf("Enter the Time in the format hh:mm:ss\n \n");
    printf("Time 1 = ");
    scanf("%d %d %d", &t1hr, &t1min, &t1sec);

    printf("Time 2 = ");
    scanf("%d %d %d", &t2hr, &t2min, &t2sec);

    //This if else block calculates the seconds
    if (0 < t1sec+t2sec && t1sec+t2sec < 60 ){
            t1sec = t1sec+t2sec;
    }
    else if (t1sec+t2sec > 60)
    {
        t1sec = t1sec+t2sec-60;
        t1min=t1min+1;
    }

    //This if else block calculates the minutes.
    if (0 < t1min+t2min && t1min+t2min < 60 ){
            t1min = t1min+t2min;
    }
    else if (t1min+t2min > 60)
    {
        t1min = t1min+t2min-60;
        t1hr=t1hr+1;
    }

    //This if else block calculates the hours and day.
    if (0 < t1hr+t2hr && t1hr+t2hr < 24 ){
            t1hr = t1hr+t2hr;
    }
    else if (t1hr+t2hr > 24)
    {
        t1hr = t1hr+t2hr-24;
        day=day+1;
    }

    printf("The added Time is : %dday %d:%d:%d",day,t1hr,t1min,t1sec);

    return 0;
}