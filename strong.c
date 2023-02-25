// WAP to check strong number or not

#include<stdio.h>
#include<conio.h>

int main(){
    int num = 145,count,rem,sum=0,temp,fact;
    temp=num;
    while(num){
        rem=num%10;
        count = 1;
        fact = 1;
        while(count<=rem){
            fact = fact*count;
            count++;
        }
        sum = sum+fact;
        num = num/10;
    }
    if(sum == temp){
        printf("Strong Number");
    }else{
        printf("Not a strong Number");
    }

}