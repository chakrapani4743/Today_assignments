#include <stdio.h>
#define N 5
int main(){
   const int a[N]={1,2,3,4,5};
    int l=0,s=0,i;
    for(i=0;i<N;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
        }
        else if(a[i]>s){
            s=a[i];
            }
    }
    printf("the second largest number is %d",s);
    return 0;
}
