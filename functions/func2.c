// WAP to calculate area of square with return value but not arguments.
#include<stdio.h>

int areaOfSquare(){
    int square_side=5;
    return square_side*square_side;
}
int main(){
    printf("%d",areaOfSquare());
}