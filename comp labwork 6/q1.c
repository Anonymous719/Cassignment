#include <stdio.h>
/*Program to find gcd of two numbers*/

int gcd(int, int);//Declaring the function

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d, %d", &n1, &n2);//Taking user input
    printf("G.C.D of %d and %d is %d.", n1, n2, gcd(n1, n2));
    //Calling the function and printing the result
    return 0;
}
//Recursive function
int gcd(int n1, int n2) {
    if (n2 != 0){
        return gcd(n2, n1 % n2);
        //Calling the function by swapping the value and dividing the greater number till we get the perfect divisor
    }else{
        return n1;//ending condition
    }
}