#include <stdio.h>

int main(){
    int a,b;
    b=0;
    top:
    printf("Enter a number - ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("The entered number cannot be negative\n");
        goto top;
    }
    
    for(int i=1;i<a;i++){
        if (a%i==0)
        {
            b=b+i;
        }
    }
    if (b==a)
    {
        printf("The entered number is Perfect number");
    }else{
        printf("The entered number is not Perfect number");
    }
}