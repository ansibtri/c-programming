// Print the given patterns
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
#include<stdio.h>

void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=5;j>0;j--){
        printf("%d ",j);
    }
    printf("\n");
    }
}