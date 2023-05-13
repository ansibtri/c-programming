#include<stdio.h>
#include<conio.h>
// void swap(int *x, int *y){
//     int temp;
//     temp = *x; // save the value at address x
//     *x = *y; // put y into x 
//     *y = temp; //  put temp into y
//     return;
// }
// int main(){
//     int a=34,b=74;
//     printf("%d and %d\n",a,b);
//     swap(&a,&b);
//     printf("%d and %d\n",a,b);
//     return 0;
// }

void changeValue(int* address){
    *address=56;
}
int main(){
    int a=34;
    printf("The value of a before change is %d\n",a);
    changeValue(&a);
    printf("The value of a after change is %d\n",a);
}