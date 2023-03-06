//WAP to print pattern
/*
N
NE
NEP
NEPA
NEPAL
*/
#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char string[5]="NEPAL";
    for(i=0;i<strlen(string);i++){
        for(j=0;j<i;j++){
            printf("%c",string[j]);
        }
        printf("\n");
    }
}