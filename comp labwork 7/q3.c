#include <stdio.h>
/*Program to sort the numbers in array in ascending order using bubble sort*/
void sort(int [],int);//declaring the function
int main(){
    int length;
    printf("How many numbers do you want to store? ");
    scanf("%d",&length);
    int num[length];
    printf("Enter the numbers -\n");
    for (int i=0;i<length;i++){
        scanf("%d",&num[i]);
    }//Input from the user
    sort(num, length);//calling the function
    printf("the sorted form is -\n");
    for (int i=0;i<length;i++){
        printf("%d ",num[i]);
    }/*printing the sorted array as its value is passed by reference when passing
    in a function so the change stays done from the function*/
}
//the function recives the array and its length as passed values
void sort(int num[],int length){
    int temp;
    for (int i = length-1; i >0; i--)
    {
        for (int j = 0; j<i;j++){
            if (num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }//bubble sorting using nested loop
    return;//no need to return the modifird value of the array as the passing was done as reference
}