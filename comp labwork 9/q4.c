/**
 * @file q4.c
 * @author Nischal Baral
 * @brief Program to calcualte the area of a quadilateral
 */
#include <stdio.h>
#include <math.h>

struct point {
    double x, y;
};//deeclaring a structure for value of points

double length(struct point,struct point);
double triangle(struct point ,struct point ,struct point );
double quad(struct point [] );//declaring the functions

/**
 * @brief main function
 * entry point of the function
 * asks the user for input of the points
 * 
 * @return int 
 */
int main(){
    struct point points[3];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the x and y coordinates of the points in order - ");
        scanf("%lf,%lf", &points[i].x, &points[i].y);
    }//user input
    printf("The area is %lf",quad(points));//calling a function to calculate the area and printing it    
}

/**
 * @brief function to calculate the area of the quadilateral
 * calls triangle function to calculate the area of two triangles formed by dividing the quadilateral
 * 
 * @param points the array holding the value of the points
 * @return double returning the final area of the quadilateral
 */
double quad(struct point points[]){
    double area = triangle(points[0],points[1],points[2])+triangle(points[0],points[3],points[2]);
    return area; 
}

/**
 * @brief function to calculate the area of the triangle
 * calls length function to calculate the length of the side of the triangle
 * @param p1 first point of the triangle
 * @param p2 second point of the triangle
 * @param p3 third point of the triangle
 * @return double returning the area of the triangle
 */
double triangle(struct point p1,struct point p2,struct point p3) {
    double a,b,c,s;
    a= length(p1,p2);
    b= length(p2,p3);
    c= length(p3,p1);//calling the length function to calculate the length
    s=(a+b+c)/2;//calculating the semiperimeter of the triangle
    double area = sqrt((s*(s-a)*(s-b)*(s-c)));//using Heron's formula for calculating the area of a triangle
    return area;//returning the area
}

/**
 * @brief function to calculate the distance between two points
 * 
 * @param p1 structure holding value of first point
 * @param p2 structure holding value of second point
 * @return double reuturning the distance between two points
 */
double length(struct point p1,struct point p2){
    double temp1 =p1.x-p2.x, temp2 =p1.y-p2.y;
    double temp =temp1*temp1+temp2*temp2;
    double len = sqrt(temp);
    return len;
}