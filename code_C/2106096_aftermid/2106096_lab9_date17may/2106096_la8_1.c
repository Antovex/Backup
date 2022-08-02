/*
Antarin Ghosal
LA8.1 WAP to add two numbers using call by reference.
*/


#include <stdio.h>

int add(int *a,int *b,int *c){	
	*c=*a+*b;}
int main () 
	{
	int x,y,s=0;
	printf("ENter the Value of x and y: ");
	scanf("%d %d",&x,&y);
	add(&x,&y,&s);
	printf("SUM:%d",s);
   return 0;
}
