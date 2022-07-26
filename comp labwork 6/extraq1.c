#include <stdio.h>
/*Program to convert decimal number to binary*/

int binary(int);//Declaring the function

int main(){
    int a;
    printf("Enter a positive number - ");
    scanf("%d",&a);//User input
    printf("The binary number of %d is %d",a,binary(a));
    //Calling the function and printing the result
}

int binary(int deci){
    if (deci==0){
        return 0;//Ending condition
    }else{
        return deci%2+10*binary(deci/2);//Using recursion and adding on to the value
    }
}