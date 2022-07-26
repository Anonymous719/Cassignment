#include <stdio.h>

int main(){
    int number,i,factorial;
    factorial =1;
    i=1;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number == 0)
    {
        factorial=1;
    }
    if (number <0)
    {
        printf("Invalid number");
        goto exit;
    }
    
    while(i<=number){
        factorial = factorial * i;
        i++;
    }
    printf("The factorial of %d is %d",number,factorial);
    exit:
    return 0;
}