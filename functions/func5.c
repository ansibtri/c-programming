// WAP to find the sum of two numbers(function with arguments and with return value)
#include<stdio.h>

int sum(int num1, int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    printf("Enter the 1st number:");
    scanf("%d",&num1);
    printf("Enter the 2nd number:");
    scanf("%d",&num2);
    printf("sum=%d",sum(num1,num2));
}