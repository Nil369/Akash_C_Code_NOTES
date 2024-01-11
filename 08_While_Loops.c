#include<stdio.h>

int main()
{
    int num, i = 0;// variable decleration
    
    //Taking input from user: 

    printf("Enter a no. upto which you want to print: ");
    scanf("%d",&num);

    //Executing While Loop:
    while (i<num)
    {
        printf("%d\n", i);
        i = i+1;
    }

    return 0;
}

