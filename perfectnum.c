#include<stdio.h>
int perfectNumber(){
    int num,i,sum = 0,z;
    printf("Enter the number:\t");
    scanf("%d",&num);
    z=num;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(z==sum){
        printf("Perfect Number");
    }else{
        printf("Not a Perfect Number");
    }
}
int main(){
    perfectNumber();
    return 0;
}