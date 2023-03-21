//WAP to check whether the entered character is found or not.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char string[50]="arrryh";
    char ch[10]="h";
    int result;
    result=strcmp(ch,string);
    printf("%d",result);
}