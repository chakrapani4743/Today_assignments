#include<stdio.h>
#define N 7
int main()
{
    int a[N] = {1,3,2,4,6,5,7};
    int i = 0,j = 0,temp;
    for (i = 0;i < N;i++)
    {
        for (j = 0;j < N;j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0;i < N;i++)
    {
        printf("%d ",a[i]);
    }
    int sec_large = a[N - 2];
    printf("\n secund largest Num : %d",sec_large);
}

