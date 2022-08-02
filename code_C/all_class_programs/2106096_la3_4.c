/*Author : Antarin Ghosal
Program : WAP to read an alphabet from from the user and convert it into lowercase if the entered alphabet is in uppercase,
otherwise display an appropriate message.*/


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