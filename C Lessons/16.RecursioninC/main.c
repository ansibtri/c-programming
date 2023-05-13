#include<stdio.h>

int factorial(int number){
    if(number ==1 || number == 0){
        return 1;
    }else{
        return (number * factorial(number-1));
    }
}
int main() {
    int num;
    printf("Enter the number you want factorial of \t");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num, (float) factorial(num));
    return 0;
}