// If-Else Practice: Give people some gifts who have passed both MATHS & SCIENCE EXAM : i)Cake ii)₹45
//Those who have passed in indivual subject give them: ₹20 each who have passed either in Maths / in Science

#include <stdio.h>
#include <string.h> //For comparing string

int main() {
    char ch[20]; 
    printf("Have you passed the Exam ?? \n");
    scanf("%s", ch);

    if (strcmp(ch, "yes") == 0) {
        printf("In which Exam have you passed? \n");

        scanf("%s", ch); // Reading the type of exam

        if (strcmp(ch, "science & Maths") == 0) { //'strcmp' to compare strings and reads the input string using %s in the scanf function.
            printf("congrats🎊...Here is your Gift: ₹45");
        } else if (strcmp(ch, "maths") == 0) {
            printf("Here is your gift: ₹20");
        } else if (strcmp(ch, "science") == 0) {
            printf("Here is your gift: ₹20");
        } 

    } 
    else {
        printf("You haven't passed the exam. Better luck next time!");
    }

    return 0;
}
