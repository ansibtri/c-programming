// WAP to find the highest and lowest element of an array using DMA.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int i,n,large,small;
    printf("Enter number of elements to be enetered: \n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Error! Memory not allocated");
        exit(0);
    }
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    large=*ptr;
    small=*ptr;
    for(i=0;i<n;i++){
        if(large<*(ptr+i)){
            large=*(ptr+i);
        }
        if(small>*(ptr+i)){
            small=*(ptr+i);
        }
    }
    printf("Largest Number =%d\n",large);
    printf("Smallest Number=%d",small);
    return 0;
}