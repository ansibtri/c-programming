// WAP to implement all kind of operators using switch case
#include <stdio.h>
#include <conio.h>
int chooseOperation(); // function declaration
int menu()
{
    printf("\n\nEnter the number to choose the option.\n");
    printf("1.Arithmetic Operations\n");
    printf("2.Relational Operations\n");
    printf("3.Increment Decrement\n");
    printf("4.Logical Operations\n");
    printf("5.Exit\n\n");
}

int arithmeticOperations()
{
    int sum, mul, div, mod, diff, a, b;
    printf("The first number is:\n");
    scanf("%d", &a);
    printf("The second number is:\n");
    scanf("%d", &b);
    sum = a + b; // addition operation
    mul = a - b; // Multiply Operation
    div = a / b; // Division Operation
    mod = a % b; // Modulo Operation
    printf("Sum=%d\n", sum);
    printf("Multiply=%d\n", mul);
    printf("Division=%d\n", div);
    printf("Mod=%d\n", mod);
    chooseOperation();
}

int relationalOperations()
{
    int a,b;
    printf("The first number is:\n");
    scanf("%d", &a);
    printf("The second number is:\n");
    scanf("%d", &b);
    a > b ? printf("%d is greater than %d\n", a, b) : ("%d is greater than %d\n", a, b);
    a == b ? printf("%d is equal to %d", a, b) : printf("%d is not equal to %d\n", a, b);
    a >= b ? printf("%d is greater than or equal to %d\n", a, b) : ("%d is greater than or equal to %d\n", a, b);
    chooseOperation();
}

int logicalOperations()
{
    printf("The 1 AND(&&) 1 is %d\n", 1 && 1);
    printf("The 1 AND(&&) 0 is %d\n", 1 && 0);
    printf("The 0 AND(&&) 0 is %d\n", 0 && 0);
    printf("The 1 OR(||) 1 is %d\n", 1 || 1);
    printf("The 1 OR(||) 0 is %d\n", 1 || 0);
    printf("The 0 OR(||) 0 is %d\n", 0 || 0);
    printf("The complement(NOT) of 1 is %d\n", !1);
    printf("The complement(NOT) of 0 is %d\n", !0);
    chooseOperation();
}

int incdec()
{
    int a,b;
    printf("The first number is:\n");
    scanf("%d", &a);
    printf("The second number is:\n");
    scanf("%d", &b);
    printf("The value of a is %d\n", a);
    // incrementation
    printf("The value after pre-increment is %d\n", ++a);
    a++; // performing post incrementation
    printf("The value after post-increment is %d\n", a);
    // decrementation
    printf("The original value of b is %d\n", b);
    printf("The value after pre-decrement is %d\n", --b);
    b--; // performing post incrementation
    printf("The value after post-decrement is %d\n", b);
    chooseOperation();
}
int chooseOperation()
{
    menu();
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        arithmeticOperations(); // arithemetic operations
    case 2:
        relationalOperations(); // relational opeartions
    case 3:
        incdec(); // increment decrement operations
    case 4:
        logicalOperations(); // increment decrement operations
    case 5:
        break;
    }
}
int main()
{
    chooseOperation();
}