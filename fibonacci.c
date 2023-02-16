#include<stdio.h>
// WAP to find fibonacci series till n times.
int main(){
    int a=0,b=1,sum=0,num;
    printf("Enter the max count you want to print\n");
    scanf("%d",&num);
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i=0; i<num;i++){
        sum=a+b;
        printf("%d\t",sum);
        a=b;
        b=sum;
    }
    return 0;
}