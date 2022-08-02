/*Author: Antarin Ghosal
Program: WAP to multiply two matrices and display it.*/

#include<stdio.h>
int main()
{
	int r,c,a[100][100],b[100][100],d[100][100];
	int i,j,k,sum,e;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("\nEnter the number of columns:");
	scanf("%d",&c);


	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("\nEnter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("\nEnter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			sum=0;
			e=1;
			for(k=0;k<c;k++)
			{
				e=a[i][k]*b[k][j];
				printf("%d",e);
				sum+=e;
			}
			d[i][j]=sum;
			sum=0;
		}
	}

	printf("\nThe multiplication of the two matrix is:\n");

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d  ",d[i][j]);
		}
		printf("\n");
	}


	return 0;
}
