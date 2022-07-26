#include <stdio.h>

int main(){
    int a,b,i,n,flag;
    flag = 0;
    printf("Enter the number of times you want to get the number: ");
    scanf("%d",&n);
    if (n%2==1)
    {
        n=n/2+1;
        flag=1;
    }else{n=n/2;}
    
    a=0;b=1;i=0;
    while(i<n){
        if (flag==1 && i==n-1)
        {
            printf("%d ",a);
        }else{
        printf("%d,%d,",a,b);}
        a=a+b;
        b=a+b;
        i=i+1;
    }
    return 0;
}