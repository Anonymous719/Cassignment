#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d;
    d=0;
    printf("Enter a number - ");
    scanf("%d",&a);
    b = cbrt((double)a);
    b = (int)b;
    c=a;
    while (c!=0)
    {
        d=d+c%10;
        c=c/10;
    }
    if (d==b)
    {
        printf("The entered number is Dudeney number");
    }else{
        printf("The entered number is not Dudeney number");
    }
}