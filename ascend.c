// WAP to arrange number in ascending number
#include<stdio.h>
#include<string.h>
// it's an example of insertion sort 
int main(){
    int num[]={9,8,7,6,5,4,3,2,1,0};
    int i,j,a;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(num[i]>num[j]){
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d\n",num[i]);
    }
}