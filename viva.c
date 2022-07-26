#include <stdio.h>

struct student{
    char name[100];
    int id_no;
    float grade;
};
void print(struct student []);
int main(){
    struct student ce[5];
    for (int i = 0; i <= 5; i++)
    {
        scanf("%s",&ce[i].name);
        scanf("%d",&ce[i].id_no);
        scanf("%f",&ce[i].grade);
    }
    print(ce);
    return 0;

}

void print(struct student ce[]){
    for (int i = 0; i <=5; i++)
    {
        printf("%s",ce[i].name);
        printf("%d",ce[i].id_no);
        printf("%f",ce[i].grade);
    }
    return;
}