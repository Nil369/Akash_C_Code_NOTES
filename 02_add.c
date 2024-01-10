#include <stdio.h> //pre-processor statement

int main(){
    int a,b; //  variable decleration

    printf("Enter your 1st number: \n"); //print the function
    scanf("%d", &a); //take input from keyboard
    
    printf("Enter your 2nd number: \n");
    scanf("%d" , &b);

    printf("The sum of your two numbers is : %d ", a+b); // printing the sum of the 2 numbers of user input 

    return 0;
}
