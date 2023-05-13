#include<stdio.h>
int exit(){
    printf("The program ended");
    return 0;
}
int main(){
    char input;
    float kmsToMiles = 0.621371, inchesToFoot = 0.0833333, cmsToInches = 0.0328084, poundToKgs = 0.453592, inchesToMeters = 0.0254;
    float first,second;
    
    while(1){
        printf("Enter the input character. \nor\nQ to quit\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.pound to kgs\n5.inches to meters\n");
        scanf("%c", &input);

        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        printf("Enter Quantity in terms of second unit\n");
        scanf("%f",&second);

        switch (input)
        {
        case 'q':
            printf("Quitting the program");
            // goto end;
            break;
        case '1':
            second = first * kmsToMiles;
            printf("%f KMS is equal to %f Miles\n", first, second);
            break;
        case '2':
            second = first * inchesToFoot;
            printf("%f Inches is equal to %f Foot\n", first, second);
            break;
        case '3':
            second = first * cmsToInches;
            printf("%f CMSis equal to %f Inches \n", first, second);
            break;
        case '4':
            second = first * poundToKgs;
            printf("%f Pounds is equal to %f KGS \n", first, second);
            break;
        case '5':
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters \n", first, second);
            break;
        default:
            break;
        }
    }
    return 0;
}