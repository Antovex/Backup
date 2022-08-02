/*
Antarin Ghosal
SA8.1 WAP to create, initialize, assign and access a pointer variable.
*/


#include <stdio.h>

int main () 
	{
	int a=5;
	int *p1;
	p1=&a;

	printf("%d ",*p1);
	
   return 0;
}
