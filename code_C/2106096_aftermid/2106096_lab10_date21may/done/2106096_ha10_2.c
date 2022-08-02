/*
Name: Antarin ghosal
HA10.2 WAP to calulate the difference between two time periods. Times are given in hr, min and sec.
*/

#include<stdio.h>

struct time{
	int second,min,hr;
}t1,t2,D;


int main()
{
	printf("Time1:\n");
	printf("ENTER TIME:hr:");
	scanf("%d",&t1.hr);
	printf("min:");
	scanf("%d",&t1.min);
	printf("Sec:");
	scanf("%d",&t1.second);
	
	printf("Time2:\n");
	printf("ENTER TIME:hr:");
	scanf("%d",&t2.hr);
	printf("min:");
	scanf("%d",&t2.min);
	printf("Sec:");
	scanf("%d",&t2.second);
	
	//DIFRENCE
	
	D.hr=t1.hr-t2.hr;
	D.min=t1.min-t2.min;
	D.second=t1.second-t2.second;
	
	while(D.second<0)
	{
		D.second=60+D.second;
		D.min=D.min-1;
	}
	while(D.min<0)
	{
		D.min+=60;
		D.hr=-1;
	}
	
	printf("TIME DIFFRENCE:%d:%d:%d",D.hr,D.min,D.second);
	return 0;
}
