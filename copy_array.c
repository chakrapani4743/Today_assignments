#include<stdio.h>
#define N 5
int main()
{
    int arr1[N] = {1,2,3,4,5},arr2[N],i = 0;
    int *ptr = arr1;
    for (i = 0;i < N;i ++)
    arr2[i] = *(ptr + i);
    for (i = 0;i < N;i++)
    printf("%d ",arr2[i]);
    return 0;
}
