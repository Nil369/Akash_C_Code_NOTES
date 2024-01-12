// SIMPLE FOR LOOP:

#include <stdio.h>

int main()
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++) //Condition for...for loop => Agar index(i) ki value = 0 then agar i ki value num=10 se choti ho to i ko 1 se bara do (i.e i++) or loop me enter karo or code ko execute karo
    {
        printf("%d \n", i);
    }
    return 0;
}

// INFINITE FOR LOOP:

/*#include <stdio.h>

int main()
{




   // Declare variables i and j, initialize j to 0
    int i, j=0;

    // Infinite loop (no condition provided in the loop header)
    for(i=0; ; )
    {
        // Print the values of i and j to the console
        printf("%d %d\n", i, j);

        // Increment both i and j
        i++;
        j++;
    }

    // This line will never be reached due to the infinite loop
    //Press: Ctrl+C to escape infite loop;
    return 0;
}
*/
