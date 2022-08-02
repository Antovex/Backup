/*Author : Antarin Ghosal
Program : WAP to count vowels and consonants in a string using pointer.*/

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    char *p;
    int vow=0,consts=0;

    printf("\nEnter a string : ");
    gets(s);

    p=s;

    while(*p!='\0'){
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
            vow++;
        }
        else{
            if(*p!=' '){
                consts++;
            }
        }
    p++;
    }

    printf("The number of vowels Present are : %d",vow);
    printf(" And consonants are : %d",consts);

    return 0;
}