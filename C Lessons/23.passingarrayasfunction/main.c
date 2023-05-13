#include<stdio.h>
#include<conio.h>

int func1(int array[]){
    for(int i=0;i<4;i++){
        printf("The value of %d is %d\n",i,array[i]);
    }
    array[0]=382; // very important point:- that if you change any value here it gets reflected in main();
    return 0;
}

int func2(int* ptr){
    for(int i=0;i<4;i++){
        printf("The value of %d is %d\n",i,*(ptr+i));
    }
    *(ptr+2)=6534;
    return 0;
}

int main(){
    int arr[]={23,13,3,4};
    // func1(arr);
    // printf("%d",arr[0]);

    func2(arr);
    func2(arr);
}