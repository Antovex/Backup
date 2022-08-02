/*
Name : Antarin ghosal
SA7.6 WAP to extract a substring of a given string.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	char str[10];
	int i,p1,s;

	printf("Enter the string: ");
	scanf("%[^\n]s",str);
    int	len=strlen(str);
    
    printf("enter the staring postion: ");
    scanf("%d",&p1);
    printf("enter the size of the substring:");
    scanf("%d",&s);
    
    printf("subString: ");
    for(i=p1-1;i<(p1+s)-1;i++)
    	printf("%c",str[i]);
  	
    
    
   
	

return 0;
}

//reverse is on the string
