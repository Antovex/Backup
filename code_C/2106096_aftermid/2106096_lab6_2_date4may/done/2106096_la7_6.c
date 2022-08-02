/*
Name : Antarin ghosal
LA7.6 WAP to replace all occurrences of a character in a string with the previous 3rd character if any of the character.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char ch;
char str[10];
int i;
	printf("Enter the sstring: ");
	scanf("%[^\n]s",str);
    int	len=strlen(str);
   	printf("%s",str);
    
    
    for(i=0;i<len;i++)
    {
    	ch=tolower(str[i])-3;
    
		if(ch<97)
    		ch=ch+26;
    		
    		
  		if(isalpha(str[i]))
			str[i]=ch;
	}
	
 	printf("\n%s",str);

	

return 0;
}