/*
Antarin Ghosal
HA7.3 WAP to find the LCM of two numbers a and b by using a suitable function (say LCM) for this.
*/

#include<stdio.h>

int LCM(int a,int b)
{
	int i,lcm;
		for(i=1;i<=(a<b?a:b);i++)
			if(a%i==0&&b%i==0)
				lcm=i;
	return lcm;
}

int main()
{
	int x,y;
	printf("ENTER the value of A and B : ");
		scanf("%d %d",&x,&y);
	printf("LCM of %d and %d is %d",x,y,LCM(x,y));
	
	return 0;
	
}
