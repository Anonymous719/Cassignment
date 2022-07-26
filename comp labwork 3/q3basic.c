#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    printf("Enter a number-");
    scanf("%d",&a);
    e=a;
    b=0;
    d=a;
    f=1;
    while (a>1)
    {
        c=a%2;
        b=b+c*f;
        a=a/2;
        d=a;
        f=f*10;
    }
    b=b+d*f;
    printf("The binary form of %d is %d",e,b);
}