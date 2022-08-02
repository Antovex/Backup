/*
Name: Antarin ghosal
LA10.1 WAP to store n student�s information (i.e. student�s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject.
24/05/22
*/

#include<stdio.h>
struct stdinf
{
	char name[20];
	int roll;
	char gender;
	int marks[5];
};
int main()
{
	int n,i,j;
	printf("tenter the value of n: ");
	scanf("%d",&n);
	
	struct stdinf info[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n\nENter info for student %d\n\n",i+1);
	
		printf("Enter name:");
		scanf("%s",&info[i].name);
		
		printf("enter roll:");
		scanf("%d",&info[i].roll);
		
		printf("Enter Gender:");
		scanf(" %c",&info[i].gender);
		
		printf("Enter marks one by one: ");
		for(j=0;j<5;j++)
		{
		printf("SUBJECT %d: ",j+1);
		scanf("%d",&info[i].marks[j]);
		}
	}
		printf("\n\n\t----FAILED LIST----\n");
		printf("%6cNAME\tSUBJECT\t\tMARKS\n",' ');
	for(i=0;i<n;i++)
		for(j=0;j<5;j++)
			if(info[i].marks[j]<40)
				printf("%10s\tSubject%d\t%d\n",info[i].name,j+1,info[i].marks[j]);
	return 0;
	}
	

