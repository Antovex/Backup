/*
Antarin Ghosal
LA7.1 WAP to swap the values of two variables by using a suitable user defined function 
(say SWAP) for it.
*/

#include<stdio.h>

void SWAP(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("value of a:%d b:%d After swap\n ",x,y);
}

int main()
{
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	printf("Value of a:%d b:%d before swap\n",a,b);
	SWAP(a,b);
	return 0;
}
