/*Author : Antarin Ghosal
Program : WAP to print a string using pointer.*/


#include<stdio.h>

int main(){
    char str[100];
    char *p;
    printf("\nEnter a string : ");
    gets(str);

    p = str;

    printf("\nEntered string is : ");
    while(*p!='\0')
        printf("%c",*p++);

    return 0;
}