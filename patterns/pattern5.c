// Print the given patterns
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E
#include<stdio.h>

void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("%c ",i+65);
    }
    printf("\n");
    }
}