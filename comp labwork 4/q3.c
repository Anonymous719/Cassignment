#include <stdio.h>
#include <math.h>

int main(){
    int a,i,n,b,c,d,e,j;
    printf("Enter an number - ");
    scanf("%d",&a);
    i=0;n=0;b=a;c=a;d=0;
    while(c!=0){
        d++;
        c=c/10;
    }
    for (i = 0; i < d; i++)
    {    
        j = a%10;
        e= pow(j,d);
        e=round(e);
        printf("%d\n", e);
        n = n + e;
        a=a/10;
        printf("%d\n",n);
    }
    if (b==n)
    {
        printf("The entered number is Armstrong");
    }else{
        printf("The entered number not Armstrong");
    }
    return 0;
}