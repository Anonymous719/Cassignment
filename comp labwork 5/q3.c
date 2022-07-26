#include <stdio.h>
#include <math.h>
/*Program to calculate the area of quadilateral using functions to calculate area of triangle and distance between two points*/
double distance(double,double,double, double);
double triangle(double, double, double, double, double,double);
double quad(double, double, double, double, double, double, double, double);
//Declaring the functions

int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Enter the points in order\n");
    printf("Enter coordinates of first point - ");
    scanf("%lf,%lf",&x1,&y1);
    printf("Enter coordinates of second point - ");
    scanf("%lf,%lf",&x2,&y2);
    printf("Enter coordinates of third point - ");
    scanf("%lf,%lf",&x3,&y3);
    printf("Enter coordinates of fourth point - ");
    scanf("%lf,%lf",&x4,&y4);//Taking input from user
    printf("The area of the thus formed quadilateral is %lf",quad(x1,y1,x2,y2,x3,y3,x4,y4));
    //Calling the function and printing the area of quadilateral
}

//function to calculate the area of quadilateral
double quad(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
    double tri1,tri2;
    tri1=triangle(x1,y1,x2,y2,x3,y3);
    tri2=triangle(x1,y1,x4,y4,x3,y3);
    //Calling function to calculate the area of the triangles
    return tri1+tri2;//Returning the sum of the areas of the triangles
}

//function to calculate the area of triangles
double triangle(double x1, double y1, double x2, double y2, double x3, double y3){
    double a,b,c,s,temp;
    a= distance(x1,y1,x2,y2);
    b= distance(x1,y1,x3,y3);
    c= distance(x2,y2,x3,y3);
    //Calling the function to calculate the length of the sides of the triangle
    s=(a+b+c)/2;
    temp=s*(s-a)*(s-b)*(s-c);
    return sqrt(temp);//returning the area of triangle calculated using Heron's formula
}

//function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2){
    double temp;
    temp=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    return sqrt(temp);
}