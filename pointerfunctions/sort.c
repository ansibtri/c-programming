//WAP to sort n integer values in an array using pointer.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void display(int *p,int m);
void sort(int *p, int n);
int main(){
    int arr[100];
    int *ptr,n,i;
    ptr=arr;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("\nThe array elements before sorting are: \n");
    display(arr,n);
    sort(arr,n);
    printf("\n The array elements after sorting are:\n");
    display(arr,n);
    getch();
    return 0;
}
void sort(int *p, int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(*(p+j) > *((p+j)+1)){
                temp=*(p+j);
                *(p+j)=*((p+j)+1);
                *((p+j)+1)=temp;
            }
        }
    }
}
void display(int *p, int m){
    int i;
    for(i=0;i<m;i++){
        printf("%d\t",*(p+i));
    }
}