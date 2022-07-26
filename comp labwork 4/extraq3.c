#include <stdio.h>

int main(){
    int j,n;
    j=1;
    for(int i=1;i<=10;i++){
        for(int k=1;k<(11-i);k++){printf(" ");}
        for(int l=0;l<i;l++){
           /* if (i+l>9)
                {
                    printf("%d",i+l-10);
                }else{                
                    printf("%d",i+l);
                }*/
                printf("%d",(i+l)%10);
                n=i+l;
        }
        for (int m=1; m<i; m++){
                /* if (n-m>9)
                {
                    printf("%d",n-m-10);
                }else{                
                printf("%d",n-m);}*/
            printf("%d",(n-m)%10);
        }
        printf("\n");
        j=j+2;
    }
}