#include<stdio.h>
#include<conio.h>

int func1(int a){
    static int myvar;
    // printf("The address of a inside func1 is %d\n", &a);
    return myvar++;
}
int main(){
    int a = 34;
    printf("%d\n",&a);
    int val = func1(a);
    int * ptr = &a;
    printf("The value of func1 is %d\n",val);
    val = func1(a);
    printf("The value of func1 is %d",val);
    return 0;
}