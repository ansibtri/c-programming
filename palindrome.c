// WAP to check whether the number is palindrome or not.

#include<stdio.h>

int isPalindrome(int num){
    int originalNum,rev=0;
    originalNum = num;
    while(num!=0){
        rev=(rev*10)+num%10;
        num=num/10;
    }
    if(originalNum==rev){
        printf("The number %d is palindrome.",rev);
    }else{
        printf("The number %d is not palindrome.",rev);
    }
}
int main(){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    isPalindrome(num);
    return 0;
}