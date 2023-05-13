#include<stdio.h>

int fibonacciSeries(int maxLimit){
    int a = 0;
    int b = 1,sum = 0;
    int currentLimit = 0;
    printf("%d\n",a);
    printf("%d\n",b);
    if(currentLimit < maxLimit){
        sum = a + b;
        printf("%d\n",sum);
        a=b;
        b=sum;
        currentLimit++;
        fibonacciSeries(maxLimit);
    }
    return 0;

}
int main(){
    int maxLimit;
    printf("How much maximum:\n");
    scanf("%d",&maxLimit);
    fibonacciSeries(maxLimit);
    return 0;
}