/*Author : NOOBanto
Program : WAP to display if a number is strong number or not.*/


#include<stdio.h>
int main()
{
	long int num,fac=1,sum=0;
	int i,digit,j;
	printf("Enter Number");
	scanf("%d",&num);
	for(i=1;num>0;i++)
	{
		digit=num%10;
		num/=10;
		for(j=1;j<=digit;j++)
		{
			fac=fac*j;
			sum=sum+fac;
		}
		fac=1;
		
	} 
	if (sum==num)
	{
		printf("The number is a strong number");	
	}
	else
	{
		printf("The number is not a strong number");
	}
	return 0;
}