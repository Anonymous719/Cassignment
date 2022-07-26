#include <stdio.h>
/*Program to check if the entered word is a palindrome or not*/
int check(char []);//function to check for palindrome
int len(char []);//function to calculate the length of the string
//Declaring the functions
int main(){
    char palindrome[15];
    printf("Enter a word - ");
    scanf("%s",palindrome);//user input
    if (check(palindrome)==1)//calling the function and checking the condition
    {
        printf("The entered word is a palindrome");
    }else{
        printf("The entered word is not a palindrome");
    }
    
}
//the passed value is the user entered word
int check(char palindrome[]){
    int length = len(palindrome);//calling the function to calculate its length
    int count = 0,flag = 1;
    char reversed[15];
    for (int i = length-1; i >= 0; i--)
    {
        reversed[i] = palindrome[count];
        count++;
    }//reversing the word and storing temporially
    for (int i =0;i<length;i++){
        
        if (palindrome[i] != reversed[i])
        {
            
            flag=0;
        }
        
    }//checking the reversed word with initial word
    return flag;//returning the flag value
}
//the passed value is the user entered word
int len(char palindrome[]){
    int i,flag = 0;
    for (i = 0; flag ==0; i++)
    {
        if (palindrome[i] =='\0')
        {
            flag=1;
        }//checking for the end of the word
        
    }//loop for counting the length of the word
    return i-1;//returning the length of the word
}