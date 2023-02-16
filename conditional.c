// WAP to read a number, if it odd, increase it by 2, if it is even, deduct it by 2.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("The value of this even number %d is %d",num, num-=2);
    }else{
        printf("The value of this odd number %d is %d",num, num+=2);
    }
    return 0;
}