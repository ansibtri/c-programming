// WAP to input m*n order matrix and find its transpose using function

#include<stdio.h>

void display(int m,int n,int arr[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void transpose(int m,int n,int arr[m][n]){
    int i,j;
    printf("transposed!\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int m,n,i,j;
    printf("Enter the no of row: \n");
    scanf("%d",&m);
    printf("Enter the no of column: \n");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[j][i]);
        }
    }
    display(m,n,arr);
    transpose(m,n,arr);
}
