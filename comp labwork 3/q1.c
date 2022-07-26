#include <stdio.h>

int main(){
    int a;
    printf("Enter the marks obtained -");
    scanf("%d",&a );
    if (a>100 || a<0)
    {
        printf("Invalid marks");
    }else if (a>=80)
    {
        printf("A");
    }else if (a>=75)
    {
        printf("A-");
    }else if (a>=70)
    {
        printf("B+");
    }else if (a>=65)
    {
        printf("B");
    }else if (a>=60)
    {
        printf("B-");
    }else if (a>=55)
    {
        printf("C+");
    }else if (a>=50)
    {
        printf("C");
    }else if (a>=45)
    {
        printf("C-");
    }else if (a>=40)
    {
        printf("D");
    }else
    {
        printf("Fail");
    }
}