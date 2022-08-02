/*
Antarin Ghosal
LA8.4 WAP to swap three numbers in cyclic order using Call by Reference. In other words, WAP that
takes three variable (a, b, c) in as separate parameters and rotates the values stored so that
value a goes to be, b, to c and c to a.
*/


#include <stdio.h>

void cyclic(int *i,int *j,int *k)
{
		int temp=*j;
		*j=*i;
		*i=*k;
		*k=temp;
}

int main () 
	{
	int a,b,c;
	printf("Enter the value of a b and c: ");
	scanf("%d %d %d",&a,&b,&c);
  	printf("VAlue before cyclic swap A:%d\tB:%d\tC:%d\n",a,b,c);
	cyclic(&a,&b,&c);
	printf("VAlue after cyclic swap A:%d\tB:%d\tC:%d",a,b,c);
   return 0;
}
