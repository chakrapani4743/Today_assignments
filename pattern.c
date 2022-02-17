#include<stdio.h>
int main()
{
    int const n = 5;
    int i = 0,j = 0;
    for (i = n;i >= 0;i--)
    {
        for (j = n;j>=0;j --)
        {
            if (i >= j)
            printf("* ");
            else
            printf("_ ");
        }
        printf("\n");
    }
    return 0;
}
