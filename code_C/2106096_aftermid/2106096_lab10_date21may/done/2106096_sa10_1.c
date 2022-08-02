/*
Name: Antarin ghosal
SA10.1 WAP to store one student�s information (i.e. student�s roll no, name, gender, marks etc) of an
educational institute and display all the data, using structure.
24/05/2022
*/
#include<stdio.h>
#include<string.h>
struct stdinf
{
	char name[20];
	int roll;
	char gender;
	int marks;
};

int main()
{
	struct stdinf std1={"Antarin",2106069,'M',100};
	printf("Name:%s\nRoll:%d\nGender:%c\nMarks:%d",std1.name,std1.roll,std1.gender,std1.marks);
	return 0;
}
