#include<stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    const float b = 7.33;
    printf("MY BACKSLASH \\n sss \a %f", PI);
    printf("Format Specifier and Escape Sequence\n");
    printf("The value of a is %d and the value of b is %-7.4f this\n", a,b);
    return 0;
}
