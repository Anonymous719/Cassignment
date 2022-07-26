//Nischal_Baral
//Roll_no_6
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a 3 digit number-");
    scanf("%d",&a);
    d=a;
    b=a%10;
    c=b*100;
    a=a/10;
    b=a%10;
    c=c+b*10;
    a=a/10;
    b=a%10;
    c=c+b*1;
    printf("The required answer is %d",c);
}