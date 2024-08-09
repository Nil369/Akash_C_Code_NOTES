/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
#include <stdio.h>
int main()
{
    struct Drivers
    {
        char name[50];
        char dln[50];
        char route[50];
        int Kms;
    }d1,d2,d3;

    
    printf("Enter 1st driver name: ");
    scanf("%s", &d1.name);

    printf("Enter your Driving Liscence No.: ");
    scanf("%s", &d1.dln);

    printf("Enter your Route: ");
    scanf("%s", &d1.route);

    printf("Enter How Many Kms You Drove : ");
    scanf("%d", &d1.Kms);

    printf("Enter 2nd driver name: ");
    scanf("%s", &d2.name);

    printf("Enter your Driving Liscence No.: ");
    scanf("%s", &d2.dln);

    printf("Enter your Route: ");
    scanf("%s", &d2.route);

    printf("Enter How Many Kms You Drove : ");
    scanf("%d", &d2.Kms);

    printf("Enter 3rd driver name: ");
    scanf("%s", &d3.name);

    printf("Enter your Driving Liscence No.: ");
    scanf("%s", &d3.dln);

    printf("Enter your Route: ");
    scanf("%s", &d3.route);

    printf("Enter How Many Kms You Drove : ");
    scanf("%d", &d3.Kms);
    

    printf("\n*************** Printing Information of the drivers ***************\n\n");
    printf("1st Driver Name: %s\n",d1.name);
    printf("1st Driver's Driving Liscence No.: %s\n",d1.dln);
    printf("1st Driver's Route : %s\n",d1.route);
    printf("Kms Drove by 1st driver: %d\n",d1.Kms);
    
    printf("2nd Driver Name: %s\n",d2.name);
    printf("2nd Driver's Driving Liscence No.: %s\n",d2.dln);
    printf("2nd Driver's Route : %s\n",d2.route);
    printf("Kms Drove by 2nd driver: %d\n",d2.Kms);

    printf("3rd Driver Name: %s\n",d3.name);
    printf("3rd Driver's Driving Liscence No.: %s\n",d3.dln);
    printf("3rd Driver's Route : %s\n",d3.route);
    printf("Kms Drove by 3rd driver: %d\n",d3.Kms);
    
    
    return 0;
}
