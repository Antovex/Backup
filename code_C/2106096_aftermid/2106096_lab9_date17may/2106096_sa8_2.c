/*
Antarin Ghosal
SA8.2 WAP to print size of different types of pointer variables.
*/


#include <stdio.h>

int main () 
	{
		
		printf("\nsize of int pointer: %d",sizeof(int*));
 		printf("\nsize of char pointer: %d",sizeof(char*));
		printf("\nsize of float pointer: %d",sizeof(float*)); 
		printf("\nsize of double pointer: %d",sizeof(double*));
   return 0;
}
