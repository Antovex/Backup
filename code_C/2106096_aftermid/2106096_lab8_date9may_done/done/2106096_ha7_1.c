/*
Antarin Ghosal
HA7.1 WAP to test whether a number num (num is entered through keyboard) is a number in
 the Fibonacci sequence or not.
*/

#include<stdio.h>

int fibo(int x)
{
	int a=-1,b=1,c=a+b,flag=0;
	while(c<=x)
	{
		if(c==x)
			flag=1;
		a=b;
		b=c;
		c=a+b;
	}
	
	return flag;
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf(" %d",&num);
	
	if(fibo(num))
		printf("%d comes in fibonaci series",num);
	else
		printf("IT DOES NOT COMES IN FIBONACCI SERIES");
	return 0;
	
}
