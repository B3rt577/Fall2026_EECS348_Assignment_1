/*
Author Name: Edbert Jensen
Program Name: EECS 348 Assignment 1
Brief description: C program that picks a secret number between 1 and 10. The user gets up to 3 tries to guess the number
Inputs: 3 guesses from user
Outputs: ask user to enter number from 1-10. tell user if guess was correct, high or low, and game over if all guesses were incorrect.
Collaborators: qwen3:1.7b
Other sources: 
Creation date: 9/8/2026 7:21PM
Revision date: 9/8/2026 10:41PM
Revisions: add line by line comments and label any AI generated comments
*/

// all code is genertated by qwen3:1.7b
#include <stdio.h>                  // import standard input output library

int main() {                        // main function takes no params
    int secret = 7;                 // secret is 7
    int guess, attempts = 0;        // guess and attempts are 0

    while (attempts < 3) {          // repition while statement that test if attempts is lesser than 0
        printf("Enter your guess (1-10): ");        // ask user to enter the guess
        scanf("%d", &guess);                        // scan the user number

        if (guess == secret) {                      // if guess equals to secret
            printf("Win! You guessed the correct number.\n");       // then print win
            break;                                  // break out of while loop
        } else if (guess > secret) {                // else if guess is greater than secret
            printf("Too high! Try again.\n");       // then print Too high! Try again
        } else {                                    // otherwise
            printf("Too low! Try again.\n");        // print Too low! Try again
        }

        attempts++;                                 // post-increment attempts
    }

    if (attempts == 3) {                            // if all attempts are exhausted and user did not guess the secret correctly
        printf("Game Over! You failed to guess the correct number.\n");     // then print game over message
    }

    return 0;
}
