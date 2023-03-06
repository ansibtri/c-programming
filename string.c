// WAP to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
    char string[5];
    printf("Enter the word: ");
    gets(string);
    if(string==strrev(string)){
        printf("Palindrome String.");
    }else{
        printf("Not a Palindrome String.");
    }
}