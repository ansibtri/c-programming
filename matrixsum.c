// WAP to add two 3x3 matrix. Display the sum stored in 3rd matrix.

#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,arr1[3][3],arr2[3][3],arr3[3][3];
    printf("Enter the elements for first array\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    } 
    printf("Enter the elements for 2nd array\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The sum of two 3x3 matrix is below\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\n",arr3[i][j]);
        }
    }

}