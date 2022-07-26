/** @file q3.c
 * @brief Program to transpose a matrix
 * @author Nischal Baral
 * Roll no 6
 * Group CE
*/

#include <stdio.h>

/** Function to transpose the matrix
 * @param m size of the matrix
 * @param initial the matrix itself
 */
void q3_transpose(int m, int initial[][m]){
    for(int i=0; i<m; i++){
        for(int j = 0; j<m; j++){
            if(i < j) {
                int temp;
                temp = initial[i][j];
                initial[i][j] = initial[j][i];
                initial[j][i] = temp;
            }
        }
    }
}

int main(){
    int rows,cols;
    printf("Enter the size of the matrix - ");
    scanf("%d,%d",&rows,&cols);//User input of the number of rows annd columns
    int m = rows>cols ? rows : cols;
    int initial[m][m];//declaring the matrices


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element (%d,%d) - ",i,j);
            scanf("%d",&initial[i][j]);//user input of the matrix
        }
    }

    printf("The initial matrix was - \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",initial[i][j]);
        }//printing the initial matrix
        printf("\n");
    }

    q3_transpose(m,initial);//calling the function

    printf("The transposed matrix is - \n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ",initial[i][j]);
        }//printing the final transposed matrix
        printf("\n");
    }
}

