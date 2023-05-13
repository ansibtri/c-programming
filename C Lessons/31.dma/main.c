#include<stdio.h>
#include<stdlib.h>

int main(){
    //use of malloc

    // int*ptr;
    // ptr=(int*) malloc(3*sizeof(int));
    // for(int i=0;i<4;i++){
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);
    // }
    // return 0;

//use of calloc
    int*ptr;
    int n;
    printf("Enter the no of elements to be entered: ");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    printf("\nEnter the no of elements to be entered: ");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}