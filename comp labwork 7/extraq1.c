#include <stdio.h>
int len(char []);
int main(){
    char first[15], second[15];
    int count;
    printf("Enter two strings -");
    scanf("%s  %s",&first, &second);
    int length1=len(first);
    int length2=len(second);
    printf("%d, %d",length1,length2);
    char final[(length1+length2)-1];
    for (int i = 0; i < length1; i++)
    {
        final[i]=first[i];
        
    }
    count=length1;
    for (int i = 0; i < length2; i++) {
        final[count]=second[i];
        count++;
    }
    printf("\n\nThe final concatinated string is %s",final);
}
int len(char tocount[]){
    int i,flag = 0;
    for (i = 0; flag ==0; i++)
    {
        if (tocount[i] =='\0')
        {
            flag=1;
        }
        
    }
    return i-1;
}