// WAP to find m*n Matrix and find its transpose using function
#include<stdio.h>
#include<conio.h>

void readMatrix(int arr[m][n],int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void transpose(){

}
int main(){
    int m,n;
    printf("Enter the row:  ");
    scanf("%d",&m);
    printf("Enter the column: ");
    scanf("%d",&n);
    int arr[][];
    readMatrix(arr[m][n],m,n);
}