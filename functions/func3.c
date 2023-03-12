// WAP to calculate average of five numbers with arguments and without return value.
#include<stdio.h>

float average(int num1, int num2, int num3, int num4, int num5){
    printf("Average=%d",(num1+num2+num3+num4+num5)/5);
}
int main(){
    average(1,2,3,4,5);
}