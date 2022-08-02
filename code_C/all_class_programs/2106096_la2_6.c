/*Author : Antarin Ghosal
Program : WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer and meter
*/


#include<stdio.h>

int main(){

    int Em,Okm,Om;
    printf("Enter the value in meters : ");
    scanf("%d",&Em);

    Okm = Em / 1000;    //This converts to Km.
    Om = Em % 1000;     //This calculates the remaining distance in meters.

    printf("%d meters = %d Km and %d meter.",Em,Okm,Om);

    return 0;
}