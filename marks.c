// WAP to input the average marks of student and add 10% bonus marks if his/her average marks is greater than or equal to 65
#include<stdio.h>
int main(){
    float avgMarks;
    printf("Enter the average marks:\n");
    scanf("%f", &avgMarks);
    if(avgMarks >= 65) {
        avgMarks+=avgMarks*0.1;
    }else{
        avgMarks=avgMarks;
    }
    printf("Marks=%.2f",avgMarks);
    return 0;
}