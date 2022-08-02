/*
Name: Antarin ghosal
LA10.2 WAP to add two distances (in km-meter) using structures.
*/

#include<stdio.h>
struct dis
{
	int km;
	int m;
};

int main()
{
	struct dis d1,d2,sum;
	
	printf("Enter distance1:KM:");
	scanf("%d",&d1.km);
	printf("M:");
	scanf("%d",&d1.m);
	
	
	printf("Enter distance2:KM:");
	scanf("%d",&d2.km);
	printf("M:");
	scanf("%d",&d2.m);
	
	sum.km=d1.km+d2.km;
	sum.m=d1.m+d2.m;
	
	if(sum.m>1000)
		{
			int temp=sum.m/1000;
			sum.km=sum.km+temp;
			sum.m=sum.m%1000;
		}
		
	printf("Total distance: %dkm %dm",sum.km,sum.m);
		
	
	return 0;
}


