// Print the given patterns
// A
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>

void main(){
    int i,j;
    for(i=0;i<=5;i++){
        for(j=0;j<i;j++){
        printf("%c ",j+65);
    }
    printf("\n");
    }
}