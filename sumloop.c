// WAP to find the number and sum of all number greater than 100 and less than 200 that are divisible by 5
#include<stdio.h>

int main(){
    int i,sum=0;
    for(i=101;i<200;i++){
        if(i%5==0){
            sum+=i;
        }
    }
    printf("sum=%d",sum);
    return 0;
}