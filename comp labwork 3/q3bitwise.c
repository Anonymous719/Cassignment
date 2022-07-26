#include <stdio.h>

int main(){
    int a,i;
    i = 32768;
    printf("Enter a number-");
    scanf("%d",&a);
    while (i>0)
    {
        if ((a & i) == 0)   
        {
            printf("0");
        }else{
            printf("1");
        }
        i >>= 1;
    }
}