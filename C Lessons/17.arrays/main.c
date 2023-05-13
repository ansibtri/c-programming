// Arrays in C
#include <stdio.h>

int main()
{
    int marks[2][4] = {
        {45, 234, 2, 3},
        {3, 2, 4, 5}};
    // marks[0]=34;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[1]=454;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[2]=44;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[3]=43;
    // printf("marks of student 1 is %d\n", marks[0]);

    // for (int i=0; i<4; i++){
    //     printf("Enter the value of %d element of the array \n ",i);
    //     scanf("%d",&marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the value of %d, %d element of the array %d\n ", i, j, marks[i][j]);
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}