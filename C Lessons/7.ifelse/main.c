#include<stdio.h>


int main() {
    printf("Practising If else control statements\n");
    int age;
    printf("Enter your age \n");
    scanf("%d",&age);
    if(age>=18 && age != 25){
        printf("You are %d and eligible for upcoming events.\n", age);
    }else if(age == 25){
        printf("You are %d which is end of Barmacharyasram", age);
    }
    else{
        printf("You are %d and not eligible for upcoming task.", age);
    }
    return 0;
}