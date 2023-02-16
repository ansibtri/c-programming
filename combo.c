// WAP to display the following men and perform the following operations
#include<stdio.h>
#include<conio.h>

int chooseOperation(); // function declaration 
int menu(){ // program menu
    printf("\n\nChoose Your Operation\n\n");
    printf("1.Find Simple Interest\n");
    printf("2.Convert Celsius to Fahreinheit\n");
    printf("3.Convert Character into ASCII\n");
    printf("4.Find Area of Circle\n");
    printf("5.Exit from the program and perform above operation until users want to exit\n\n");
    printf("Enter any number except above mentioned will close the program");
}
int simpleInterest(){ // simple interest calculation
    float p,t,r,si;
    printf("Enter the Principle, Time and Rate\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple Interest=%.2f",si);
    getch();
    chooseOperation();
}
int celsiusFahreinheit(){ // celsius to fahreinheit conversion
    float celsius, fahreinheit;
    printf("Enter the temperature in celsius:\t");
    scanf("%f",&celsius);
    fahreinheit = (celsius * 9/5) + 32;
    printf("The %.2f degree celsius is %.2f degree Fahreinheit\n",celsius,fahreinheit);
    getch();
    chooseOperation();
}

int charToASCII(){ // character to ASCII conversion
    char ch;
    printf("\nEnter the character:\t");
    scanf("%c",&ch);
    int ascii = ch;
    printf("The ASCII character of %c is %d",ch,ascii);
    getch();
    chooseOperation();
}

int areaOfCircle(){ // area of circle calculation
    float radius,area;
    printf("Enter the radius:\n");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("The area of circle is %.2f",area);
    getch();
    chooseOperation();
}

int chooseOperation(){ // menu option choosing
    menu();
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        simpleInterest();
        break;
    case 2:
        celsiusFahreinheit();
        break;
    case 3:
        charToASCII();
        break;
    case 4:
        areaOfCircle();
        break;
    case 5:
        chooseOperation();
        break;
    default:
        printf("Program Shutdown.");
        return 0;
    }
    return 0;
}

int main(){
    chooseOperation();
}