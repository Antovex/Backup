/*Author : Antarin Ghosal
Program : WAP change from lower to upper case*/


#include<stdio.h>

int main(){
    char character;
    printf("Enter the character : ");
    scanf("%c",&character);

    if (character>='a' && character<='z'){
        character= character - 32;
        printf("\nThe Upper case character for the given input is : %c \n",character);
    }
    else printf("\nEnter a Lower case character!!\n");


    return 0;
}