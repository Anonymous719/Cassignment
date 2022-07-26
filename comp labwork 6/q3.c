#include<stdio.h>
/*Program to print the nth term of fibonacci series */

int fibonacci(int n);//Declaring function
int main(){
    int term;
    printf("Which term?  ");
    scanf("%d", &term);//User input
    printf("The %dth term of fibonacci sequence is %d.",term, fibonacci(term));
    //Calling the function and printing the result
}

int fibonacci(int n){
    if(n==1) {
        return 0;//Special case
    }else if(n==2) {
        return 1;//Special case
    }else{
        return fibonacci(n-1) + fibonacci(n-2);//Returning the nth term using recursion
    }
}