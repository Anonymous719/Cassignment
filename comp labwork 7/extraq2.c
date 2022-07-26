#include <stdio.h>

void input(int [],int);
void print(int[],int[],int);
int main(){
    int num;
    printf("How many elements ? ");
    scanf("%d",&num);
    int taken[num], check[num];
    input(taken,num);
    printf("The unique elements are :\n");
    print(taken,check,num);
}

void input(int taken[],int num){
    for(int i=0;i<num;i++){
        printf("Enter the term %d - ",i+1);
        scanf("%d",&taken[i]);
    }
    return;
}

void print(int taken[],int check[], int num){
    int count =0,flag;
    for (int i = 0; i < num; i++)
    {
        flag = 0;
        for (int j = 0; j < count; j++){
            if (taken[i] == check[j])
            {
               flag=1;
            }
        }
        if (flag == 0){
            printf("%d ",taken[i]);
            taken[i] = check[count];
            count++;
        }    
    }
}