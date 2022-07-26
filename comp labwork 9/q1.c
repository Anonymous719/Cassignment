/**
 * @file q1.c
 * @brief Program to find the largest number in array using pointers
 * @author Nischal Baral
 */
#include<stdio.h>

/**
 * @brief main function also the entry point
 * Take the input of the array from user and stores the largest value's address in a pointer
*/
int main(){
    int n;
    printf("Enter the number of items in array ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        printf("Enter the %d element of array ",i+1);
        scanf("%d",array+i);
    }//user input
    int largest=*array;//creating pointer
    for (int i=0;i<n;i++){
       if(largest<=*(array+i)){//checking for larger value
        largest=*(array+i);}//storing the address of the largest value in the pointer
    }
    printf("The largest number in the array is %d ",largest);//printing the largest value
    return 0;
}