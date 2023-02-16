#include<stdio.h>
// function to check greatest number
int checkGreatestNumber(int num1, int num2, int num3, int num4){
    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is the greatest number", num1);
    }else if(num2>num1 && num2>num3 && num2>num4){
        printf("%d is the greatest number", num2);
    }else if(num3>num2 && num3>num1 && num3>num4){
        printf("%d is the greatest number", num3);
    }else{
        printf("%d is the greatest number",num4);
    }
}
int main(){
    int num1,num2,num3,num4;
    printf("Enter the first, second, third and fourth number\n");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    checkGreatestNumber(num1,num2,num3,num4);
    return 0;
}