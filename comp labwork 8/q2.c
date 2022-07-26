/** @file q2.c
 * @brief Program to add two  matrix
 * @author Nischal Baral
 * Roll no 6
 * Group CE
*/
#include <stdio.h>

int main(){
    int row, col;
    printf("Enter the size of the matrix: ");
    scanf("%d,%d",&row,&col);//User input of rows and columns
    int first[row][col],second[row][col],added[row][col];//declaring the matrix


    printf("Enter the first matrix\n");
    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the element of %d,%d- ",i,j);
            scanf("%d",&first[i][j]);
        }
    }//input of first matrix


    printf("Enter the second matrix\n");
    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++){
            printf("Enter the element of %d,%d- ",i,j);
            scanf("%d",&second[i][j]);
        }
    }//input of second matrix


    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++){
            added[i][j] = first[i][j]+second[i][j];
        }
    }//adding the two matrix and storing it in third matrix


    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ",added[i][j]);
        }
        printf("\n");
    }//printing the final added matrix
    return 0;
}