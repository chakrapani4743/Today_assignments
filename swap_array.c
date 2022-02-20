#include<stdio.h>
#define N 5
int main()
{
    int arr1[N] = {1,2,3,4,5},arr2[N] = {5,4,3,2,1},i = 0;
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    printf("Before Swap : \n");
    for (i = 0;i  < N;i++)
    printf("%d",*(ptr1 + i));
    printf("\n");
    for (i = 0;i  < N;i++)
    printf("%d",*(ptr2 + i));
    printf("\n After swap :\n");
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    for (i = 0;i  < N;i++)
    printf("%d",*(ptr1 + i));
    printf("\n");
    for (i = 0;i  < N;i++)
    printf("%d",*(ptr2 + i));
    printf("\n");
    return 0;
    
}
