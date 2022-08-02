/*Author : Antarin Ghosal
Program : WAP to display KIMS.*/


#include<stdio.h>

int main(){
    int s1,s2,s3;
    printf("Enter the sides : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if ((s1 == s2) && (s2==s3))
        printf("\nThis is an Equilateral Triangle.\n");
    else if ((s1==s2)||(s2==s3)||(s1==s3))
        printf("\nThis is an Isosceles Triangle\n");
    else printf("\nThis is a Scalene Triangle.\n");

    return 0;
}