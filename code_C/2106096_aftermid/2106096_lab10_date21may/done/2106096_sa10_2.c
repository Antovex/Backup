/*
Name: Antarin ghosal
SA10.2 WAP to store n student�s information (i.e. student�s roll no, name, gender, marks etc) of an
educational institute and display all the data, using array of structure.
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
	int n,i;
	printf("Enter the value of n:(total number of student)");
	scanf("%d",&n);
	struct stdinf std[n];
	//input
	for(i=0;i<n;i++)
		{
			printf("\n-------for student %d---------",i+1);
			printf("\nEnter name: ");
			scanf("%s",&std[i].name);
			printf("\nEnter roll: ");
			scanf("%d",&std[i].roll);
			printf("\nEnter gender: ");
			scanf(" %c",&std[i].gender);
			printf("\nEnter marks: ");
			scanf("%d",&std[i].marks);
		}
	//display
	printf("\n\nSno.\tName\tRoll\tGender\tmarks\n");
	for(i=0;i<n;i++)
		printf("%d\t%s\t%d\t%c\t%d\n",i+1,std[i].name,std[i].roll,std[i].gender,std[i].marks);
	
	return 0;
	
}
