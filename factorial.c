// WAP to find factorial of a given number using recursive funciton
#include<stdio.h>
#include<conio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}