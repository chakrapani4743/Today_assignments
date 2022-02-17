#include<stdio.h>
#define N 5
int main()
{
    const int a[N] = {1,2,3,4,5};
    int large = 0,small = 0,i;
    for (i = 0;i < N;i++)
    {
        if (a[i] > large)
        {
            small = large;
            large = a[i];
        }
        else if(a[i] > small)
        {
            small = a[i];
        }
    }
    printf("The secund largest num : %d",small);
    return 0;
    
}
