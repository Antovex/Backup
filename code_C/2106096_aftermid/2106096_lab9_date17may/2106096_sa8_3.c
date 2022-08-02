/*
Antarin Ghosal
SA8.3 WAP to add two numbers using pointers.
*/


#include <stdio.h>

int main () 
	{
	int a=5,*p1=&a;
	int b=6,*p2=&b;
  	int c= *p1+*p2;
  	printf("SUM: %d",c);
	
   return 0;
}
