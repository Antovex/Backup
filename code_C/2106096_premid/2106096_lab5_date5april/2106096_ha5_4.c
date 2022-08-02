/*Author : Antarin Ghosal
Program : WAP to find the standard deviation of a list of numbers.*/


#include<stdio.h>
#include<math.h>

int main(){
int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);

    float sum = 0.0, mean, SD = 0.0;

    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    printf("\nStandard Deviation = %.6f", sqrt(SD / 10));

    return 0;
}