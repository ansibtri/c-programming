// Understanding Pointers
// What is pointer?
// Variable which stores the address of another variable 
// can be of type int, char, array, function or any other pointer. 
// size depends on the architecture. Ex 2 bytes for 32 bit.
// Pointer in C Programming language can be declared using * (asterisk symbol)

#include<stdio.h>

int main() {
    int a;
    a=76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n",*ptra);
    printf("The value of a is %p\n",*ptra);
    printf("The value of a is %p\n",ptra);
    printf("The value of a is %p\n",ptr2);
    printf("The hex value of a is %x\n",a);
    printf("The hex value of a is %p\n",&a);
    return 0;
}
