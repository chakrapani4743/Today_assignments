

#include<stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 20;
    const int* ptr = &num1;
    *ptr = 30; // ERROR
    printf("The address of num1 %u\n",ptr);
    ptr = &num2;
    printf("The address of num2 %u",ptr);
    return 0;
}
