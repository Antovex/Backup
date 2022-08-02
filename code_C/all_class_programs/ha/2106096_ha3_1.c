/*Author : Antarin Ghosal
Program : WAP to cheack weather the entered value is digit, character or special character*/


#include<stdio.h>

int main(){
    char a;
    printf("enter value : ");
    scanf("%c",&a);

    if (a<32)
        printf("Null input");
    else if ((a>=32 && a<=47) || (a>=58&&a<=64) || (a>=91&&a<=96) || (a>=124&&a<=127))
        printf("\nThe entered value is a Special character.\n");
    else if ((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
        printf("\nThe entered value is an English character.\n");
    else if (a>=48&&a<=57)
        printf("\nThe entered value is an Integer.\n");
    else printf("\nERROR !! Try entering a single character.\n");

    return 0;
}