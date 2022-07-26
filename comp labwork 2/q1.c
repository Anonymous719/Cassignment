//Nischal_Baral
//Roll_no_6
#include <stdio.h>
int main(){
    float cel, fer;
    printf("Enter the temperature in celcius-");
    scanf("%f", &cel);
    fer = ( cel * 9 ) / 5 + 32;
    printf("The temperature in fehrenheit is %f", fer);
}