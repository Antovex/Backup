#include<stdio.h>
struct Time
{
	int h;
	int m;
	int s;
};

int main()
{
	struct Time T1,T2,S;
	
	printf("\nEnter time 1\n");
	printf("Hour:");
	scanf("%d",&T1.h);
	printf("MINUTE:");
	scanf("%d",&T1.m);
	printf("SECOUND:");
	scanf("%d",&T1.s);	

	
	printf("\nEnter time 2\n");
	printf("Hour:");
	scanf("%d",&T2.h);
	printf("MINUTE:");
	scanf("%d",&T2.m);
	printf("SECOUND:");
	scanf("%d",&T2.s);
	
	S.h=T1.h+T2.h;
	S.m=T1.m+T2.m;
	S.s=T1.s+T2.s;
	
	
	while(S.s>60)
	{
		S.s-=60;
		S.m+=1;		
	}
	
	while(S.m>60)
	{
		S.m-=60;
		S.h+=1;
	}
printf("\nT1 : %d:%d:%d",T1.h,T1.m,T1.s);
printf("\nT2 : %d:%d:%d",T2.h,T2.m,T2.s);
printf("\nADDED TIME: %d:%d:%d",S.h,S.m,S.s);
	
	return 0;
}
