/*#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5}; 
    int b[] = {1,2,3,4,5};
    int c[5] = {0};
    int d[4];
    for (int i = 0;i < 4;i++)
    {
        scanf("%d",&d[i]);
    }
}
*/


#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    for (int i = 0;i < 5;i++)
    {
        printf("%u\n",&a[i]);
    }
}
