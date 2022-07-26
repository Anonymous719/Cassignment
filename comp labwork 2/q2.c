//Nischal_Baral
//Roll_no_6
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x,y,z;
    printf("Enter the value of a, b and c");
    scanf("%f,%f,%f",&a,&b,&c);
    z=sqrt(b*b-4*a*c);
    x=(-b-z)/(2*a);
    y=(-b+z)/(2*a);
    printf("The solutions are %f and %f",x,y);
}