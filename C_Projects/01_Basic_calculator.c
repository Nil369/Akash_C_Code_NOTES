#include <stdio.h>

int main(){
    //Variable Decleration
    int i=0;
    float num1,num2,result;
    char op;
    for(i=0;i<10 ;i++){ // Creating infinite loop
   
   //Taking Input from User:
    printf("\nEnter 1st number: ");
    scanf("%f",&num1);
    printf("\nOperation to perform: ");
    scanf(" %c",&op);
    printf("\nEnter 2nd number: ");
    scanf("%f",&num2);

    //Calculator Logic Building using switch: 
    switch (op) 
    {
    case '+':
        result = num1+num2;
        printf("The sum is: %f",result);
        break;
    case '-':
        result = num1-num2;
        printf("The diff is: %f",result);
        break;
    case '*':
        result = num1*num2;
        printf("The product is: %f",result);
        break;
    case '/':
        result = num1/num2;
        printf("The division is: %f",result);
        break;
   
    
    default:
        printf("You haven't used a right operator.Use among +,-,*,/");
        break;
    }}
    return 0;
}