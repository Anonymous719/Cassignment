#include <stdio.h>
/*Program to print from 1 to 100*/

void print(int);//Declaring function

int main(){
    int a=100;
    print(a);//Calling the function
}

void print(int a){
     if (a==1){
        printf("1 ");
        return;//Ending condition
    }else{
        print(a-1);//Recursion
        printf("%d ",a);//Printing the number after calling the function
        return;
    }
}