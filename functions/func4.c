// WAP to check whether the number is even or odd.
#include<stdio.h>

int oddEven(int num){
    if(num%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    oddEven(num)?printf("Even"):printf("Odd");
}