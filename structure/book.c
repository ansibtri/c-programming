// WAP to create a structure for the following data.
// |ROLL.no|Name|Address|Faculty|Date Of Birth
// |       |    |       |       |mm|dd|yy

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct dob{
    int mm;
    int dd;
    int yy;
};
struct books{
    char rollno[10];
    char name[100];
    char address[100];
    char faculty[100];
    struct dob date;
} book[2];
int main(){
    int i;
    printf("Enter the information of: \n");
    for(i=0;i<2;i++){
        printf("Enter the roll no: \n");
        gets(book[i].rollno);
        printf("Enter the name: \n");
        gets(book[i].name);
        printf("Enter the address: \n");
        gets(book[i].address);
        printf("Enter the faculty: \n");
        gets(book[i].faculty);
        printf("Enter month of birth: \n");
        scanf("%d",&book[i].date.mm);
        printf("Enter date of birth: \n");
        scanf("%d",&book[i].date.dd);
        printf("Enter year of birth: \n");
        scanf("%d",&book[i].date.yy);
    }
    // printf("_________________________________________________________________________________________________\n");
    printf("|\tRoll No. \t|\tName\t|\tAddress\t|\tFaculty\t|\tDate of Birth\t|\n");
    // printf("_________________________________________________________________________________________________\n");
    printf("|\t\t\t|\t\t|\t\t|\t\t|   mm   |   dd  |   yy |\n");
    for(i=0;i<3;i++){
        if(strcmp())
         printf("|\t%s \t|\t%s\t|\t%s\t|\t%s\t|   %d   |   %d  |   %d |\n",book[i].rollno,book[i].name,book[i].address,book[i].faculty,book[i].date.mm,book[i].date.dd,book[i].date.yy);
    }
}