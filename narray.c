#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,max=0;
    printf("How many elements in array?\n");
    scanf("%d",&n);
    int arr[n];
    printf("Now put elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Largest num=%d",max);
    return 0;
}