/*Author : Antarin Ghosal
Program : WAP to swap the pair of elements starting from beginning.*/


#include<stdio.h>

int main()
{
    int arr[100],n,i;
    int temp;

    printf("Enter total number of elements: ");
    scanf("%d",&n);

    //value of n must be even
    if(n%2 !=0)
    {
        printf("Total number of elements should be EVEN.");
        return 1;
    }
    //read array elements
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    //swap adjacent elements
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }

    printf("\nArray elements after swapping adjacent elements:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}