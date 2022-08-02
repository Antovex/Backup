/*
Antarin Ghosal
HA7.5 WAP by designing a recursive function to calculate the sum of all even digits of 
any given integer.
*/

#include<stdio.h>

void sumEd(int num,int sum)
{ 
	if(num!=0)
	{
		if((num%10)%2==0)
			sum+=num%10;
		sumEd(num/10,sum);
	}
	else
	printf("SUM OF EVEN DIGIT:%d ",sum);
	return;
}

int main()
{
	int n,sum=0;
	printf("ENter the number: ");
	scanf("%d",&n);
	sumEd(n,sum);
	return 0;
}
