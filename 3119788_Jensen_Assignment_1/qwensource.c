/*
Author Name: Edbert Jensen
Program Name: EECS 348 Assignment 1
Brief description: C program that picks a secret number between 1 and 10. The user gets up to 3 tries to guess the number
Inputs: 3 guesses from user
Outputs: ask user to enter number from 1-10. tell user if guess was correct, high or low, and game over if all guesses were incorrect.
Collaborators: qwen3:1.7b
Other sources: 
Creation date: 9/8/2026 7:21PM
Revision date: 9/8/2026 9:39PM
Revisions: add required prologue comments
*/

// genertated by qwen3:1.7b
#include <stdio.h>

int main() {
    int secret = 7;
    int guess, attempts = 0;

    while (attempts < 3) {
        printf("Enter your guess (1-10): ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Win! You guessed the correct number.\n");
            break;
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Too low! Try again.\n");
        }

        attempts++;
    }

    if (attempts == 3) {
        printf("Game Over! You failed to guess the correct number.\n");
    }

    return 0;
}
