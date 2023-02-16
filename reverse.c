#include<stdio.h>

int reverseData(int num){
    int rem,originalNum,rev=0;
    originalNum = num;
    while(num!=0){
        rem = num%10;
        rev=rev*10 + rem;
        num = num/10;
    }
    printf("The given number %d is reversed as %d",originalNum,rev);
}
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    reverseData(num);
}