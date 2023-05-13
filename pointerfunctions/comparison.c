//WAP to input n number in an array and check the given number is present or not using pointer.
#include<stdio.h>
#include<conio.h>

int main(){
    int n,num,i,flag=0;
    printf("Enter no.of intergers: ");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=a;
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&num);
    }
    printf("Enter number to be checked: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==*(p+i)){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Number is present");
    }else{
        printf("Number is absent");
    }
    return 0;
}