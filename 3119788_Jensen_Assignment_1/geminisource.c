// genAI gemini Pro
#include <stdio.h>

int main() {
    // Fixed secret number as required
    int secret_number = 7;
    int guess;
    int max_attempts = 3;
    int won = 0;

    printf("Welcome to the Guessing Game!\n");
    printf("I have picked a secret number between 1 and 10.\n");
    printf("You have %d attempts to guess it.\n\n", max_attempts);

    // Loop lets the user guess up to 3 times
    for (int attempt = 1; attempt <= max_attempts; attempt++) {
        printf("Attempt %d: Enter your guess: ", attempt);
        
        // Read the user's guess
        scanf("%d", &guess);

        // Check if the guess is correct, too high, or too low
        if (guess == secret_number) {
            won = 1;
            break; // Stop the loop immediately on a correct guess
        } else if (guess > secret_number) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }
    }

    // Final win or lose message
    printf("\n");
    if (won) {
        printf("Congratulations, you win! You guessed the secret number.\n");
    } else {
        printf("Game over. You lose! The secret number was %d.\n", secret_number);
    }

    return 0;
}