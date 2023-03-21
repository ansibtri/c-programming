//WAP to find nth term of fibonacci series using recursive function.
#include<stdio.h>
#include<conio.h>

int fibonacci(int n){
    if(n==1||n==0){
        return n;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
}