// Arrays and Pointer Arithmetic in c
// Pointer Arithmetic
// There are four arithmetic operators that can be used on pointers:
// ++
// --
// +
// -

#include <stdio.h>
#include <conio.h>

int main()
{
    // int a= 34;
    // int *ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d\n",ptra+1);
    // printf("%d\n",ptra+2);
    // char b = '2';
    // char* ptrb = &b;
    // printf("%d",ptrb);
    // return 0;

    int arr[] = {11, 2, 3, 4, 5, 6, 67};
    int* arrayptr = arr;
    printf("value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);
    printf("\n");
    printf("value at position 3 of the array is %d\n", arr[3]);
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", arr[0]);
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", *(arr + 1));
}