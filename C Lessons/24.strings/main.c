#include<stdio.h>
#include<string.h>
#include<conio.h>
void printStr(char str[]){
    int i=0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
}
int main(){

    // char str[] = {'a','n','i','s','h','\0'};
    // printStr(str);
    char strs[34];
    gets(strs);
    puts(strs);
}