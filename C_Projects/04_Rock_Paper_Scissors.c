#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char userChoice, cpuChoice;
    int userScore = 0, cpuScore = 0;
    srand(time(NULL)); // Seed the random number generator


    while (1) { // Infinite loop
        printf("\n******* Welcome to Rock, Paper, Scissors game by Akash ****** \n\n");
        // User input
        printf("\nEnter your choice \nr for Rock\n p for Paper\n s for Scissors\n q to quit: \n");
        scanf(" %c", &userChoice);

        // Check if the user wants to quit
        if (userChoice == 'q') {
            printf("Thanks for playing!\n");
            break; // Exit the loop
        }


        // Generate CPU's choice
        int randomNum = rand() % 3; // Generate a random number between 0 and 2
        switch (randomNum) {
            case 0:
                cpuChoice = 'r'; // Rock
                break;
            case 1:
                cpuChoice = 'p'; // Paper
                break;
            case 2:
                cpuChoice = 's'; // Scissors
                break;
        }

        // Determine the winner
        if (userChoice == cpuChoice) {
            printf("It's a draw!\n");
            userScore++;
            cpuScore++;
        } else if ((userChoice == 'r' && cpuChoice == 's') ||
                   (userChoice == 'p' && cpuChoice == 'r') ||
                   (userChoice == 's' && cpuChoice == 'p')) {
            printf("Congrats! You win!\n");
            userScore++;
        } else {
            printf("CPU wins!\n");
            cpuScore++;
        }

        // Display scores
        printf("Your score: %d\n", userScore);
        printf("CPU score: %d\n", cpuScore);
    

        // Determine the final winner
        if (userScore > cpuScore) {
            printf("Congratulations! You win the game!\n");
        } else if (userScore < cpuScore) {
            printf("CPU wins the game. Better luck next time!\n");
        } else {
            printf("It's a tie game!\n");
        }
    }
    return 0;
}
