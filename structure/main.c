#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct dob
{
    int mm;
    int dd;
    int yy;
};
struct student
{
    int rollno;
    char name[20];
    char address[20];
    char faculty[20];
    struct dob d;
};
int main(){
    int i;
    struct student st[100];
    FILE *fptr;
    fptr = fopen("student.txt","wb+");
    if(fptr=NULL){
        printf("File cannot be opened\n");
        exit(1);
    }
    printf("Enter the records of 100 students\n");
    for(i=0;i<100;i++){
        printf("Enter records of student %d\n",i+1);
        printf("Enter the roll no\n");
        scanf("%d",&st[i].rollno);
        printf("Enter the name\n");
        gets(st[i].name);
        printf("Enter the address \n");
        gets(st[i].address);
        printf("Enter the faculty\n");
        gets(st[i].faculty);
        printf("Enter the year of birthday\n");
        scanf("%d",&st[i].d.yy);
        printf("Enter the month of birthday\n");
        scanf("%d",&st[i].d.mm);
        printf("Enter the day of birthday\n");
        scanf("%d",&st[i].d.dd);
    }
    fwrite(&st,sizeof(st),100,fptr);
    rewind(fptr);
    printf("\nThe information of students who are not from pokhara");
    printf("\nRollno\tName\tAddress\tFaculty\tDate of Birth");
    fread(&st,sizeof(st),100,fptr);
    for(i=0;i<100;i++){
        if(strcmp(st[i].address,"pokhara")!=0){
            printf("\n%d\t%s\t%s\t%s\t%d\t%d\t%d",st[i].rollno,st[i].name,st[i].address,st[i].faculty,st[i].d.mm,st[i].d.dd,st[i].d.yy);
        }
    }
    fclose(fptr);
    getch();
    return 0;
}