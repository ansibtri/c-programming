// WAP to implement all kind of operators using switch case 
#include<stdio.h>

// function to perform arithmetic operations
int arithmeticOperations(int a, int b){
    int sum,mul,div,mod,diff;
    sum=a+b; // addition operation
    mul = a-b; // Multiply Operation
    div = a/b; // Division Operation
    mod = a%b; // Modulo Operation
    printf("Sum=%d\n",sum); 
    printf("Multiply=%d\n",mul);
    printf("Division=%d\n",div);
    printf("Mod=%d\n",mod);
    return 0;
}

// function to perform relational operations
int relationalOperations(int a, int b){
    a>b?printf("%d is greater than %d\n",a,b):("%d is greater than %d\n",a,b);
    a==b?printf("%d is equal to %d",a,b):printf("%d is not equal to %d\n",a,b);
    a>=b?printf("%d is greater than or equal to %d\n",a,b):("%d is greater than or equal to %d\n",a,b);
}

// function to perform logical operations
int logicalOperations(){
    printf("The 1 AND(&&) 1 is %d\n", 1&&1);
    printf("The 1 AND(&&) 0 is %d\n", 1&&0);
    printf("The 0 AND(&&) 0 is %d\n", 0&&0);
    printf("The 1 OR(||) 1 is %d\n", 1||1);
    printf("The 1 OR(||) 0 is %d\n",1||0);
    printf("The 0 OR(||) 0 is %d\n", 0||0);
    printf("The complement(NOT) of 1 is %d\n", !1);
    printf("The complement(NOT) of 0 is %d\n", !0);
}

int incdec(int a, int b){
    printf("The value of a is %d\n",a);
    // incrementation
    printf("The value after pre-increment is %d\n",++a);
    a++; // performing post incrementation
    printf("The value after post-increment is %d\n", a);
    // decrementation
    printf("The original value of b is %d\n",b);
    printf("The value after pre-decrement is %d\n",--b);
    b--; // performing post incrementation
    printf("The value after post-decrement is %d\n", b);
}
int main(){
    int num1,num2;
    printf("The first number is:\n");
    scanf("%d",&num1);
    printf("The second number is:\n");
    scanf("%d",&num2);
    arithmeticOperations(num1,num2); // arithemetic operations
    printf("\n\n\n");
    relationalOperations(num1,num2); // relational opeartions
    printf("\n\n\n");
    incdec(num1,num2); // increment decrement operations
    printf("\n\n\n");
    logicalOperations(); // logical operations
    return 0;
}