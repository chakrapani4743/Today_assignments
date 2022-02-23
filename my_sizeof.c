#include<stdio.h>
int main()
{
    int n;
    printf("The size of %ld",(char *)(&n + 1) - (char *)(&n));
    return 0;
}
