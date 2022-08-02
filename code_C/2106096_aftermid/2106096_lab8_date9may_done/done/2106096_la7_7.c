/*
Antarin Ghosal
LA7.7 WAP to compute the cosine series using function.
cos(x)=1-x^2/2!+x^4/4!-x^6/6!+ �
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
	float sum=1.0;
	int term=1,y=2,n,x;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("enter the value of x: ");
	scanf("%d",&x);
	while(term<n)
	{
		if(term%2!=0)
			sum-=(float)POWER(x,y)/fact(y);
		else
			sum+=(float)POWER(x,y)/fact(y);
			
		y=y+2;
		term=term+1;
	}
	
	printf("SUM OF THE SERIES: %0.2f",sum);
	return 0;
}


