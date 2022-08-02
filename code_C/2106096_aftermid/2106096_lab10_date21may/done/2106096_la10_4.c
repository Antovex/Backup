#include<stdio.h>
struct info
{
	char name[20];
	char Gender;
	char designaton[25];
	char depatment[25];
	float BP;	
	float GP;
};

int main()
{
	
	printf("Enter number of employee: ");
	int n,i;
	scanf("%d",&n);
	struct info employe[n];
	
	printf("\n\t\tEnter information of the employee\n");
	float HR,DA;
	for(i=0;i<n;i++)
		{
			printf("\t\t\t\tEMPLOYE %d\n\n",i+1);
			printf("ENter name: ");
			scanf(" %[^\n]s",&employe[i].name);
			printf("Enter Gender: ");
			scanf(" %c",&employe[i].Gender);
			printf("Enter DEGIGNATION: ");
			scanf(" %[^\n]s",&employe[i].designaton);
			printf("Enter DEPARTMENT: ");
			scanf(" %[^\n]s",&employe[i].depatment);
			printf("ENTER BP(basic pay): ");
			scanf("%f",&employe[i].BP);
			HR=(float)25*employe[i].BP/100;
			DA=(float)75*employe[i].BP/100;
			
			employe[i].GP=employe[i].BP+HR+DA;
		}
		
		//DISPLAY
		printf("\n %10s\t %10s\t %10s\t %10s\t %10s\t %10s\n","NAME","GENDER","DESIGNATION","DEPARTMANT","BP","GP");
	
		for(i=0;i<n;i++)
		printf("\n %10s\t %10c\t %10s\t %10s\t %10.2f\t %10.2f\n",employe[i].name,employe[i].Gender,employe[i].designaton,employe[i].depatment,employe[i].BP,employe[i].GP);	
	
	
	return 0;
}
