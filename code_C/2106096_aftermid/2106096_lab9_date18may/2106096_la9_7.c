/*Author : Antarin Ghosal
Program : WAP to print a string in reverse using a pointer.*/


#include<stdio.h>
#include<string.h>

int main(){
    char s[]="Hello world";
    int i,l;

    l=strlen(s);

    printf("The reversed string is : ");
    for(i=l;i>=0;i--){
        printf("%c",*(s+i));
    }

    return 0;
}