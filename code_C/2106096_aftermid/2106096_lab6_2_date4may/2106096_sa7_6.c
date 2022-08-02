/*Author : Antarin Ghosal
Program : WAP to extract a substring of a given string.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i,l,posi,chars;

    printf("Enter the string : ");
    gets(str);

    printf("Enter the starting position : ");
    scanf("%d",&posi);
    printf("Enter the Length of characters : ");
    scanf("%d",&chars);

    for(i=posi;i<(chars+posi);i++){
        printf("%c",str[i]);
    }

    return 0;
}