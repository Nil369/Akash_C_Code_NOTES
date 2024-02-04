#include <stdio.h>

//Just uncomment & run for that particular question
int main(){
    /* Q5. Sol

    int a=3;
    int b = 2;
    b = a+b;
    b = a*b+b/5;
    printf("%d\n");
    */


/*  Q.6 Sol.
 int sum,n;
   sum=0;
   n=0;
   
   if (n==7)
   {
    printf("Yes");
    n=n+1;
    sum=sum+n;
    printf("%d",sum);

   }
   else{
    printf("No\n");
    for (int i = 0; i < 7; i++)
    {
        n=n+1;
        sum=sum+n;
        printf("%d\n",sum);
    }
    
    }
   */

//Q.7 Sol.
    int a = 4, b = 6;  // Declare variables and assign initial values

    a = a + b;  // a becomes 10
    b = a - b;  // b becomes 4
    a = a - b;  // a becomes 6

    printf("The values of a and b are: a = %d, b = %d\n", a, b);  // Print the values
    return 0;
}