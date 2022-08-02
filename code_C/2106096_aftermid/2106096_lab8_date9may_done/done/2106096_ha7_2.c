/*
Antarin Ghosal
HA7.2 WAP to compute the power series (e to the power x).
ex=1+x+x^2/2!+x^3/3!+x^4/4!+���..
*/

#include<stdio.h>

int POWER(int x,int y)
{
	int pow=1,i;
	for(i=1;i<=y;i++)
		pow*=x;
		
	return pow;
}

int fact(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
		fact*=i;
		return fact;
}

int main()
{
	int x,term=1;
	float sum=1.0;
	printf("ENTER THE VALUE OF X: ");
	scanf("%d",&x);
	while(term<x)
	{
		sum+=(float)POWER(x,term)/fact(term);
		term++;
	}
	printf("sum of the series: %0.2f",sum);
}

