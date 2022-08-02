/*Author : Antarin Ghosal
Program : WAP to kiit grading system.*/


#include<stdio.h>

int main(){
    int no_subs,avg=0,marks;
    char grade;

    printf("Enter the number of subjects : ");
    scanf("%d",&no_subs);

    for (int i =1 ; i <= no_subs; i++){
        printf("Enter the marks of %d subject : ",i);
        scanf("%d",&marks);
        avg+=marks;
    }
    avg/=no_subs;
    //avg has the total average grade

    if (avg < 100 && avg > 90)
        grade = 'O';
    else if (avg < 89 && avg > 80)
        grade = 'E';
    else if (avg < 79 && avg > 70)
        grade = 'A';
    else if (avg < 69 && avg > 60)
        grade = 'B';
    else if (avg < 59 && avg > 50)
        grade = 'C';
    else if (avg < 49 && avg > 40)
        grade = 'D';
    else{
        printf("\nYou got an \'F\', Better luck next time.\n");
        return 0;
    }

    printf("\nCongratulation!! You got \'%c\' \n",grade);
    return 0;
}