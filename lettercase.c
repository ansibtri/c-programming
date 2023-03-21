// WAP to convert uppercase letter to lowercase and viceversa in a string given by user.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void upperCase(char string[50]){
    puts(strupr(string));
}
void lowerCase(char string[50]){
    puts(strlwr(string));
}
int main(){
    char word[50]="hello";
    int choice;
    printf("Enter the word: ");
    gets(word);
    printf("Choose Operation:\n1.Uppercase\n2.Lowercase\nYour Choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        upperCase(word);
        break;
    case 2:
        lowerCase(word);
        break;
    default:
        break;
    }
}