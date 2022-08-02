/*
Antarin Ghosal
SA8.4 WAP to swap two numbers using call by reference.
*/


#include <stdio.h>

int swap(int *a,int *b)
{
	int temp=*b;
	*b=*a;
	*a=temp;
}
int main () 
	{
	int x,y;
	printf("ENter the Value of x and y: ");
	scanf("%d %d",&x,&y);
	
	printf("Before swaping :\na:%d\tb:%d\n",x,y);
	
	swap(&x,&y);
  
	printf("After swaping :\na:%d\tb:%d\n",x,y);
   return 0;
}
