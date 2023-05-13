#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s1[]="harry";
    char s2[] = "ravi";
    char s3[54];
    puts(strcat(s1,s2));
    printf("length of string is %d\n",strlen(s1));
    puts(strrev(s1));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("the strcmp for s1,s2 returned %d",strcmp(s1,"ham"));
    
}