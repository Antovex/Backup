/*
Name : Antarin ghosal
SA7.8 WAP to replace all occurrences of a character in a given string with a new character.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char ch,ch2;
	char str[10];
	int i,p1,s;

	printf("Enter the string: ");
	scanf("%[^\n]s",str);
    int	len=strlen(str);
    
    printf("CHAR TO REPLACE:");
    scanf(" %c",&ch);
    printf("REPLACE WITH: ");
    scanf(" %c",&ch2);
    
    printf("NEW STRING:  ");
    for(i=0;i<len;i++)
    	if(str[i]==ch)
    		str[i]=ch2;
    	
	printf("%s",str);
  	
    
    
   
	

return 0;
}

//reverse is on the string
