#include<stdio.h>

int switchStatements(int num){
    switch (num)
    {
    case 2:
        printf("The number is %d\n",num);
        break;
    case 3:
        printf("The number is %d\n",num);

    default:
        printf("The number is %d\n",num);
        break;
    }
}

int main() {
    int a = 2;
    // switch(a){
    //     case 2:
    //         printf("Value is %d\n",a);
    //         break;
    //     case 3:
    //         printf("Value is %d\n",a);
    //         break;
    //     default:
    //         printf("Nothing matched\n");
    //         break;
    // }
    switchStatements(3);
    return 0;
}
