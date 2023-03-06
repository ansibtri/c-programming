// WAP to find m x n and display it.
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the no of row:\t");
    scanf("%d",&m);
    printf("Enter the no of column:\t");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\n",arr[j][i]);
        }
    }
}