/**
 * @file q2.c
 * @author Nischal Baral
 * @brief Program to bubble sort the list of user entred numbers 
 */
#include<stdio.h>
#include <stdlib.h>

void swap(int*, int*);
void sort(int [], int );//Declaring the function
/**
 * @brief main function
 * entry point of the function
 * asks the user for the list of numbers and prints them after soritng
 * @return int 
 */
int main()
{
    int number;
    printf("Enter the Number of items in array ");
    scanf("%d",&number);
    int list[number];
    for (int i=0; i < number; i++){
        printf("Enter %d item in array ",i+1);
        scanf("%d",&list[i]);
    }//user input
    sort(list, number);//calling the function for bubble sort
    printf(" Bubble sorted list is : \n");
    for (int i=0; i < number; i++){
        printf("%d \n", list[i]);
    }//printing the final sorted list
    return 0;
}
/**
 * @brief function to swap two numbers
 * 
 * @param a address of a number to swap
 * @param b address of a number to swap
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;//swaping the value
}

/**
 * @brief function to sort the list of nummberss
 * 
 * @param list the array holding the numbers
 * @param n number of elements in the array
 */
void sort(int list[], int n)
{
   int i, j;
   for (i = n-1; i>0; i--){     
        for (j = 0; j < i; j++){
           if (list[j] > list[j+1]){
              swap(&list[j], &list[j+1]);//calling swap function to swap the value
            }
        }
    }//nested loop to bubble sort
}