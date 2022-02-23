#include<stdio.h>
int main()
{
    char str[100] = "Hello world",str1[100];
    int len;
    printf("Please enter no.of bytes : ");
    scanf("%d",&len);
    if (len <= 0)
    printf("Please provide valid input :");
    else
    for (int i = 0;i < len;i++)
    str1[i] = str[i];
    for (int i = 0;i < len;i++)
    printf("%c",str1[i]);
    return 0;
}
