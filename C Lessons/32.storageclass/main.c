#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("File name is %s\n",__FILE__);
    printf("Today's Date is %s\n",__DATE__);
    printf("ANSI: %d\n",__STDC__);
    printf("Line no is %d\n",__LINE__);
}