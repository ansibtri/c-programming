// WAP to convert celsius to fahreinheit temperature
#include<stdio.h>

int main(){
    float celsius;
    float fahreinheit;
    
    printf("Enter the celsius temperature:\n");
    scanf("%f",&celsius);
    fahreinheit = (10 * 9/5)+32;
    printf("The %5.2f celsius equals to %5.2f",celsius,fahreinheit);
    return 0;
}