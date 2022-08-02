/*Author : Antarin Ghosal
Program : WAP to find the average mark of 5 subjects of a student and find the percentage.
*/

#include<stdio.h>

int main(){

    int marks=0,avg=0;

    // the following part will take input from user serially 
    // and add the sum in the variable "avg".
    for (int i=1;i<=5 && marks<=100;i++){
        printf("Enter Grade %d : ",i);
        scanf("%d",&marks);
        avg += marks; 
    }

    //as we need the avarage we need to divide the added marks
    // by number of subjects, i.e. 5 for this case.
    printf("The average of all given marks is : %d",avg/5);

    return 0;
}