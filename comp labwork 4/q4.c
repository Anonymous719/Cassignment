#include <stdio.h>

int main(){
    int a,count,i;
    char repeat='a';
    top:
    printf("Enter a number - ");
    scanf("%d%*c",&a);
    count = 0;
    i=2;
    if (a==0 || a==1)
    {
        printf("The entered number is neither prime nor composite\n");
        goto exit;
    }
    
    do{
        if (a%i==0)
        {
            count++;
        }
        i++;
    }while (i<a);
    if (count!=0)
    {
        printf("The entered number is composite\n");
    }else{
        printf("The entered number is prime\n");
    }
    exit:
    printf("Do you want to continue?\n");
    printf("If yes enter a else enter b - ");
    scanf("%c%*c",&repeat);
    switch(repeat){
        case 'a':goto top;
        break;
        case 'b':
        break;
        default:
        printf("Invalid option\n");
        goto exit;
        break;
    }
    return 0;
}