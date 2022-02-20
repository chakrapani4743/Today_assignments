#include<stdio.h>
#define N 5
int main()
{
    int arr[N] ;
    int *ptr = arr;
    printf("Enter Array elements :  \n");
    for (int i = 0;i < N;i++)
    {
        scanf("%d",(ptr + i));
    }
    for (int i = 0;i < N;i++)
    {
        printf("%d",*(ptr + i));
    }
    return 0;
}

