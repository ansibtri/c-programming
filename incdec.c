#include<stdio.h>
// WAP to implement increment/decrement operator
int main(){
    int a=45,b,c;
    printf("The pre-increment operator on a=45 is ++a=%d\n",++a);
    printf("The pre-decrement operator on a=45 is --a=%d\n",--a);
    a++;
    b=a;
    printf("The post-increment operator on a=45 is a++=%d\n",b);
    a--;
    c=a;
    printf("The post-decrement operator on a=45 is a--=%d\n",c);
}