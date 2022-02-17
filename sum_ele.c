#include<stdio.h>
int sum(int a[],int n)
{
    int Sum = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0;i < n;i++)
        {
            Sum = Sum + a[i];
            sum(a,n-1);
        }
    }
    return Sum;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    int Sum = sum(a,n);
    printf("%d",Sum);
    return 0;
    
}
