// WAP to calculate the income_tax and net_salary having following condition
// if salary >= 9000 income tax is 40% of salary
// if salary is >= 7500 and salary <=8999 then income tax is 30% of salary 
// if salary <= 7499 then income tax is 20% of salary

#include<stdio.h>

int main(){
    float salary, tax, netSalary;
    printf("Enter the salary\n");
    scanf("%f",&salary);
    if(salary>=9000){
        tax = salary * 0.4;
    }else if(salary<=8999 && salary>=7500){
        tax = salary*0.3;
    }else{
        tax = salary*0.2;
    }
    netSalary = salary - tax;
    printf("The income tax is %.2f\n", tax);
    printf("The net salary is %.2f\n", netSalary);
    return 0;
}