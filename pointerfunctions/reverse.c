//WAP to input n numbers in an array and print in reverse order using pointer.
#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,j,temp;
    printf("Enter no of integers:");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    printf("Enter the numbers: \n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(p+i)<*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("The numberes in reverse order is: \n");
    for(i=0;i<n;i++){
        printf("%d",*(p+i));
    }
    return 0;
}