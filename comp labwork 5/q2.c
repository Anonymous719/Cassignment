#include<stdio.h>
/*Program to calculate the gcd of two numbers*/
int gcd(int,int);//Declaring the function
int main(){
    int a,b;
    printf("Enter two numbers - ");
    scanf("%d,%d",&a,&b);//Taking input from user
    printf("The greatest common divisor is %d",gcd(a,b));//Printing the result returned by calling the function
    return 0;
}
//The passed value is the user entered two numbers
int gcd(int a,int b){
    int temp,dividor;
    if (a>b)
    {
        temp=b;
        b=a;
        a=temp;
    }//Swapping the numbers so a is always lesser than b for the loop
    for (int i=1;i<=a;i++){//The loop running from 1 to a checking for the divisor
        if (a%i==0 && b%i==0)
        {
            dividor=i;
        }//Checking if i divides both a and b perfectly
    }
    return dividor;//Highest value of i which could divide a and b perfectly is returned as the answer 
}