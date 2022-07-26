/**
 * @file q3.c
 * @author Nischal Baral
 * @brief Program to ask the user for student information and sort it according to roll no
 */
#include <stdio.h>

 struct Student{//structure to hold student information
    char name[100];
    int roll;
    char grade[10];
};
/**
 * @brief main function
 * entry point of the function
 * asks the user for input of the student information
 * sorts the information according to roll no
 * prints the final sorted information
 * @return int 
 */
int main(){
    int n;
    
    printf("How many students?\n");
    scanf("%d",&n);

    struct Student num[n];//decalirng the struct variable

    for(int i=0;i<n;i++){
        printf("\nEnter the details of student no. %d.\n\n",i+1);

        printf("Enter the name of the student: ");
        scanf("%s",&num[i].name);

        printf("Enter the roll no. of the student: ");
        scanf("%d",&num[i].roll);

        printf("Enter the grade of the student: ");
        scanf("%s",&num[i].grade);
    } //user input
    struct Student temp;//creating a temporary structure variable to hold the value while swapping
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if((num[j].roll)>(num[j+1].roll)){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }//checking condition for sort
        }
    }//loop for bubble sort
    printf("\nThe sorted student details:\n");
    for(int i=0;i<n;i++){
        printf("Name: %s\n",num[i].name);
        printf("Roll no.: %d\n",num[i].roll);
        printf("Grade Achived: %s\n",num[i].grade);
    }//printing the final sorted value
}