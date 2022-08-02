/*Author : Antarin Ghosal
Program : WAP to replace all occurrences of a character in a given string with a 
new character.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i,l,oc,nc;
    printf("Enter the string : ");
    gets(str);
    
    l=strlen(str);

    printf("Enter the character you want to get replaced : ");
    scanf(" %c",&oc);

    printf("Enter the new character : ");
    scanf(" %c",&nc);

    for(i=0;i<l;i++){
        if(str[i]==oc){
            str[i]=nc;
        }
    }

    printf("The modified sentence is now : ");
    puts(str);

    return 0;
}