//Nischal_Baral
//Roll_no_6
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number-");
    scanf("%d",&a);
    if ((a & (a-1))== 0)
    {
        printf("It is power of 2");
    }else{
        printf("It is not a power of 2\n");
    }
}