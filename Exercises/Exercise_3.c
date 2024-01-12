//Question : Write a program which produces Fibonacci Series of numbers using both Recursive and Iterative approach ?
//Observe Which will take more time recursive / iterative approach for Fibonacci Series 
// Fibonaci Series => 0 ,1, 1, 2,3,5,8,13,21 =>Pehle 2 ka sum phir uske bad do ka sum..Aisi series


#include <stdio.h>

//Recursive Approach
int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}

//Iterative Approach
int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1

    }
    
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}

//Here we can clearly see that for fibonacci Series Iterative Approach is better than recursive...But Why??