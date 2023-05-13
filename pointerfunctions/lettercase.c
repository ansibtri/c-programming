#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s[100];
    int i;
    printf("Enter the string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]=s[i]+32;
        }else{
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}