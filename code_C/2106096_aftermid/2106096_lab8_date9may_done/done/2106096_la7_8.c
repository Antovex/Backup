/*
Antarin Ghosal
LA7.8 WAP to count number of digits of a positive integer n by using recursion.
*/

#include<stdio.h>

void COUNT(int num,int count)
{ 
	if(num<0)
	{
		printf("the number is not postive");
		return;
	}
	if(num!=0)
	{
			count+=1;
		COUNT(num/10,count);
	}
	else
	printf("NUMBER OF DIGIT: :%d ",count);
	return;
}

int main()
{
	int n,count=0;
	printf("ENter the number: ");
	scanf("%d",&n);
	COUNT(n,count);
	return 0;
}
