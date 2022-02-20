#include<stdio.h>
#define N 5
int main()
{
    int arr[N] = {1,2,3,4,5},i = 0;
    int *ptr = arr;
    printf("Normal Array elements : \n");
    for (i = 0;i < N;i++)
    printf("%d",*(ptr + i));
     printf("\nReverse Array elements : \n");
    for (i = N - 1;i >= 0;i--)
    printf("%d",*(ptr + i));
    return 0;
    
    
}
