#include <stdio.h>
/*Program to convert decimal number to binary*/
int convert(int, int[]);//Declaring the function
int main(){
    int binary[10],deci,i;
    printf("Ennter the number to convert - ");
    scanf("%d",&deci);//user input
    i = convert(deci,binary);//calling the function
    printf("Binary form = ");
    for ( i = i-1; i >= 0; i--)
    {
        printf("%d",binary[i]);
    }//printing the final value
    return 0;
}
//the passed value is the user entered number and the array to store the binary number
int convert(int deci, int binary[]){
    int i;
    for(i=0;deci>0;i++){
        binary[i]=deci%2;
        deci = deci/2;
    }//Dividing by 2 and storing the remainder in the array
    return i;//returning the length of the array
}