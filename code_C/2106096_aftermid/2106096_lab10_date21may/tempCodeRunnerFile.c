/*Author : Antarin Ghosal
Program : WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject.
*/



#include<stdio.h>

struct student
{
    int roll;
    char name[30];
    char gender;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
}
stu[5]={
    {1,"Ramesh",'M',74,68,70,76,80},
    {2,"Suresh",'M',89,90,86,74,83},
    {3,"Kamli",'F',78,36,78,80,62},
    {4,"Ananya",'F',58,93,32,78,80},
    {5,"Kamlesh",'M',89,64,80,28,90},
};



int main(){

    printf("The Student details of individual student are : \n");
    for(int i=0;i<5;i++){
        printf("\t  %d  \t  %s  \t  %c  \t  %d  \t  %d  \t  %d  \t  %d  \t  %d  \t\n",stu[i].roll,stu[i].name,stu[i].gender,stu[i].marks1,stu[i].marks2,stu[i].marks3,stu[i].marks4,stu[i].marks5);
    }

    return 0;
}