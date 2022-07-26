#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp = fopen("ram.txt", "r"); 
    if(fp == NULL){
        printf("Could not read the file.\n");
        return -1;
    }
	char c;
    char term1[20];
    char term2[20];
    char word[20];
	int cnt = 0;
    int i =0;
    int wordcnt = 1; 
	while((c = fgetc(fp)) != EOF){ 
		if(c == ' ' || c== '\n'){ 
            word[i] = '\0';
            // printf("%s\n", word);
            if(wordcnt == 1) strcpy(term1, word);
            else strcpy(term2, word);
            wordcnt++;            
            i = 0;
		} 
		else{ 
            word[i++] = c;
		} 
	} 
	fclose(fp);
    printf("word 1 = %s\n", term1);
    printf("word 1 = %s\n", term2);
    return 0;
}