#include<stdio.h>

void arrayRev(int arr[]){
    int temp;
    for(int i = 0; i<7/2;i++){
        // swap item arr[i] with arr[6-1]
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    for(int i =0;i<7;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    arrayRev(arr);
}