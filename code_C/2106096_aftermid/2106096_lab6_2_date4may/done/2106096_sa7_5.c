/*
Name : Antarin ghosal
SA7.5 WAP to extract the first character of each word of a given string  (Achromatic string).
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	char str[10];
	int i;

	printf("Enter the string: ");
	scanf("%[^\n]s",str);
    int	len=strlen(str);
    
   	printf("%c ",str[0]);
   	
   	for(i=1;i<len;i++)
   		if(str[i]==' ')
   			printf("%c ",str[i+1]);
    
    
   
	

return 0;
}

//reverse is on the string
