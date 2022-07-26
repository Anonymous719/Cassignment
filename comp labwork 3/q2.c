#include <stdio.h>

int main(){
    int monthly,bonus,insurance,total,tax;
    printf("Enter your monthly salary-");
    scanf("%d",&monthly);
    printf("Enter your annual bonus-");
    scanf("%d",&bonus);
    printf("Enter your life insurance premium-");
    scanf("%d",&insurance);
    total = monthly * 12 + bonus - insurance;

    if (total <= 400000)
    {
        tax = total*1/100;
    }else if(total <= 500000)
    {
        tax = 4000+(total-400000)*10/100;
    }else if(total <= 700000)
    {
        tax = 14000+ (total-500000)*20/100;
    }else if(total <= 2000000)
    {
        tax = 54000+(total-700000)*30/100;
    }else if(total > 2000000)
    {
        tax = 444000+(total-2000000)*36/100;
    }
    printf("The total tax of your salary is %d",tax);
}