//You manage a travel agency and you want your n drivers to input their following details:
// 1.Name
// 2. Driving License No
// 3. Route
// 4. Kms
// Your program should be able to take n as input and your drivers willstart inputting their details one by one.

// Your Program should print details of the drivers in a beautiful fashion
// User Structure 

#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct driverDetails
{
    char name[100];
    int licenseNo;
    char route[100];
    int kms;

} dd;

int main(){
    dd driver;
    printf("Enter the details of driver\n");
    // printf("Name:\t");
    // gets(driver.name);
    // printf("\n");
    // printf("LicenseNo:\t");
    // gets(driver.licenseNo);
    // printf("\n");
    // printf("Route:\t");
    // gets(driver.route);
    // printf("\n");
    // printf("KMS:");
    // gets(driver.kms);
    // printf("\n");
    return 0;
}