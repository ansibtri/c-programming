#include<stdio.h>


int main() {
    int i;
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    for(i = 0; i<10; i++){
        if(age<10){
            continue;
        }
        printf("%d",i);
    }
    return 0;
}