// WAP to check whether the number is odd or even.

#include<stdio.h>

int isOdd(int num){
    if(num%2==0){
        printf("The given number %d is even",num);
    }else{
        printf("The given number %d is odd", num);
    }
}
int main(){
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    isOdd(a);
}