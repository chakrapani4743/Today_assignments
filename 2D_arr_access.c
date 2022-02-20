#include<stdio.h>
#define ROWS 3
#define COLS 3
int main()
{
    int arr[ROWS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};
    int *ptr = arr;
    for (int i = 0;i < ROWS * COLS ;i++)
    {
        printf("%d ",*(ptr + i));
    }
    return 0;
    
    
}
