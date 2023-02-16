// WAP to find the armstrong number
#include<stdio.h>
#include<math.h>

int main(){
    int n, r, s=0,z;
    printf("Enter any number");
    scanf("%d",&n);
    z = n;
    while(n>0){
        r=n%10;
        s=s+pow(r,3);
        n = n/10;
    }
    if(z==s){
        printf("%d is armstrong",z);
    }else{
        printf("%d isn't armstrong",z);
    }
    return 0;

}