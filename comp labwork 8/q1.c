/** @file q1.c
 * @brief Program to create a matrix woth random values
 * @author Nischal Baral
 * Roll no 6
 * Group CE
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void random(int, int);//Declaring the function

int main(){
    int rows,cols;
    srand(time(NULL));//setting random seed for rand function as time continously changes
    printf("Enter the size of the matrix: ");
    scanf("%d,%d",&rows,&cols);//user input of row and columns
    random(rows,cols);//calling the function
    return 0;
}
/** @param rows number of rows
 * @param cols number of columns
 */
void random(int rows,int cols){
    int matrix[rows][cols];//creating the matrix
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            matrix[i][j] =rand()%100;//assigning random value to the matrix less than 100
        }
    }

    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%d   ",matrix[i][j]);//printing the matrix
        }
        printf("\n");
    }
    return;
}