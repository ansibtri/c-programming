// WAP to perform three operations 
#include<stdio.h>
#include<conio.h>
int chooseOperation();

int menu(){
    printf("\nEnter your choice:\n");
    printf("1.Check Perfect Number\n");
    printf("2.Check ASCII character from 0 to 255\n");
    printf("3.Sum Of Number\n");
    printf("4.Exit\n");
}

int perfectNumber(){
    int num,i,sum=0;
    printf("\nCheck Your Perfect Number\n");
    printf("Enter the number: ",&num);
    scanf("%d",&num);
    for(i=1; i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("\nPerfect Number\n");
    }else{
        printf("\nNot a Perfect Number\n");
    }
    chooseOperation();
}

int checkASCII(){
    int i;
    for(i=0;i<255;i++){
        printf("ASCII character of %d is %c\n",i,i);
    }
    chooseOperation();
}

int sum(){
    int num1,num2;
    printf("Enter the first number:  ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("The sum = %d\n",num1+num2);
}
int chooseOperation(){
    menu();
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        perfectNumber();
    case 2:
        checkASCII();
    case 3:
        sum();
    default:
        break;
    }
}
int main(){
    chooseOperation();
}