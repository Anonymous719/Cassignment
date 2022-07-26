#include <stdio.h>
/*Program to check if the number is strong number or not.*/
int factorial(int);//Declaring the function

int main(){
    int num,numClone,temp,final;
    final =0;temp =0;
    printf("Enter a number - ");
    scanf("%d",&num);//Taking the input from the user.
    numClone =num;
    while(numClone!=0){
        temp=numClone%10;
        final=final+factorial(temp);//calling the function and adding the return value to a variable.
        numClone=numClone/10;
    }
    if (num==final)
    {
        printf("The entered number is a strong number");
    }else{
        printf("The entered number is not a strong number");
    }//Checking the condition.
    
    return 0;
}
//The passed value is a single digit of the number one by one.
int factorial(int a){
    int c=1;
    for (int i = 1; i <= a; i++)
    {
        c=c*i;
    }//Calculating the factorial using for loop.
    return c;
}