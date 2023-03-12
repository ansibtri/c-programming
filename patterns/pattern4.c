// Print the given patterns
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
#include<stdio.h>

void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("%c ",j+65);
    }
    printf("\n");
    }
}