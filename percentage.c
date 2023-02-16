#include<stdio.h>
// WAP to read the marks of 5 subjects and based on percentage printout the following.
// percentage >= 80 Distinction
// percentage 60-79 First Division
// percentage 45-59 2nd Division
// percentage 32-44 3rd Division

int main(){
    float sub1,sub2,sub3,sub4,sub5,percentage,totalMarks=500;
    printf("Enter the marks of five subjects\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    percentage = ((sub1+sub2+sub3+sub4+sub5)/500)*100;
    if(percentage>=80){
        printf("Distinction with %.2f\n",percentage);
    }else if(percentage<80 && percentage>=60){
        printf("1st Division with %.2f\n",percentage);
    }else if(percentage<60 && percentage>=45){
        printf("2nd Division with %.2f\n",percentage);
    }else if(percentage<45 && percentage>=32){
        printf("3rd Division with %.2f\n",percentage);
    }else{
        printf("Percentage Less than 32 is categorized as failed %.2f\n",percentage);
    }
    return 0;
}