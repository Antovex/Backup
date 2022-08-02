/*Author : Antarin Ghosal
Program : WAP to extract the last character of each word of a given string.*/


#include<stdio.h>
#include<string.h>
int main(){
    char lastchar,s[]="Hello World";
    int i,l;

    l=strlen(s);
    for(i=0;i<l;i++){
        lastchar=s[i];
    }

    printf("%c",lastchar);
    return 0;
}