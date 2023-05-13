//WAP to add two matrix of orde m*n by using the concept of pointer.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){
    int a[20][20],b[20][20],c[20][20],i,j,m,n;
    printf("Enter the value of m & n: \n");
    scanf("%d %d",&m, &n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\nEnter second matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",(*(b+i)+j));
        }
    }
    printf("\nAddition of Two Matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(*(c+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
            printf("%d",*(*((c+i)+j)));
        }
        printf("\n");
    }
    getch();
    return 0;
}