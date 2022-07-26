#include <stdio.h>

/*Program to print the smallest number in an array*/
int smallest(int [],int);//Declaring the function
int main(){
    int length;
    printf("How many numbers do you want to enter? ");
    scanf("%d",&length);
    int a[length];
    printf("Enter the numbers -\n");
    for (int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }
    //Input from the user
    printf("The smallest number in the array is %d",smallest(a,length));
    //Calling the function and printing the result
}
//The function recives the array and its length as passed value
int smallest(int a[], int length){
    int temp = a[0];
    for (int i = 1; i < length; i++)
    {
        if (temp>a[i])
        {
            temp = a[i];
        }//checking for the smallest value and replacint it with the temp value
        
    }
    return temp;//returninng the smallest value
}