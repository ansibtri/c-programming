// WAP to implement bitwise operators

#include<stdio.h>

int main(){
    int a=12,b=25; 
    printf("The compile time value of a is %d and b is %d\n",a,b);
    printf("Bitwise AND(&) Operations on a and b %d\n",a&b);
    printf("Bitwise OR(|) Operations on a and b %d\n",a|b);
    printf("Bitwise XOR(^) Operations on a and b %d\n",a^b);
    printf("Bitwise Left Shift Operator(<<) Operations on a and b %d\n",a<<b);
    printf("Bitwise Right Shift Operator(>>) Operations on a and b %d\n",a>>b);
    return 0;
}