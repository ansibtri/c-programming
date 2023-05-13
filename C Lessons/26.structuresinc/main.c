#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    int marks;
    char fav_char;
};

int main(){
    struct Student harry, ravi, shubham;
    harry.id=1;
    ravi.id=2;
    shubham.id=3;

    harry.marks=45;
    ravi.marks=466;
    shubham.marks=34;

    harry.fav_char='p';
    ravi.fav_char='r';
    shubham.fav_char='e';

    printf("Harry's id is %d\n",harry.id);
    printf("Ravi's id is %d\n",ravi.id);
    printf("Shubham's id is %d\n",shubham.id);
    printf("\n");
    printf("Harry got %d marks\n",harry.marks);
    printf("Ravi got %d marks\n",ravi.marks);
    printf("Shubham got %c marks\n",shubham.marks);
    printf("\n");
    printf("Harry's favourite char is  %c\n",harry.fav_char);
    printf("Ravi's favourite char is  %c\n",ravi.fav_char);
    printf("Shubham's favourite char is  %c\n",shubham.fav_char);
    return 0;
}