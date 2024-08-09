// ►  Loops are control structures that allow the execution of a block of code repeatedly as long as a specified condition is met.

// ►  Common types of loops in C are:  for, while, and do-while.

#include <stdio.h>

int main(){
    printf("\n\n*******Loop in C*********\n\n");
    int index = 0;
    while (index <= 10) // WHILE LOOP =>The while loop allows code to be executed multiple times, depending upon a boolean condition that is given as a test expression. While studying for loop, we have seen that the number of iterations is known, whereas while loops are used in situations where we do not know the exact number of iterations of the loop. The while loop execution is terminated on the basis of the Boolean (true or false) test condition.
    {
        printf("%d\n", index);
        index++;
    }

    for(int j = 0; j <= 100; j++) //FOR LOOP=> A for loop is a repetition control structure that allows us to efficiently write a loop that will execute a specific number of times.
    {
        printf("%d\n", j);
    }

    int j=0;
    do
    {
        printf("do while loop is runnig"); //DOWHILE LOOP => The main difference between the do-while loop and while loop is that, in the do-while loop, the condition is tested at the end of the loop body, whereas the other two loops are entry controlled loops.

                                            //Note: In do-while loop, the loop body will execute at least once irrespective of the test condition.
    } while (j>5);
    

    return 0;
}

/*
What is an Infinite Loop?

An infinite loop also known as an endless loop occurs when a condition always evaluates to true. Usually, this is considered an error.
Sometimes, while executing a loop, it becomes necessary to jump out of the loop. For this, we will use the break statement or continue statement.

break statement:
When a break statement is encountered inside a loop whether it is a for loop or a while loop, the loop is terminated and the program continues with the statement immediately following the loop.

continue statement:
Using a continue statement in the loop will cause the control to go directly to the test-condition and then it will continue the loop process.
*/

