/*
Name: Antarin ghosal
HA10.3 WAP to extract individual bytes from an unsigned int using union.
*/

#include<stdio.h>
union tagname
{
	unsigned int a;
	unsigned char s[4];
}object;

int main()
{
	char i; //for loop counter

	printf("Enter an integer number: ");
	scanf("%d",&object.a);

	printf("Integer number: %ld, hex: %X\n",object.a,object.a);

	printf("Indivisual bytes: ");
	for(i=3;i>=0;i--)
		printf("%02X ",object.s[i]);

	printf("\n");
	return 0;
}

