// genAI qwen3:1.7b
#include <stdio.h>

int qwen() {
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

// genAI gemini Pro
// #include <stdio.h>

int main() {
    // 1. Fixed secret number
    int secret_number = 7;
    int guess;
    int max_attempts = 3;
    int won = 0; // Acts as a boolean flag to track if the user won

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the secret number.\n\n", max_attempts);

    // 2. Loop to let the user guess up to 3 times
    for (int attempts = 1; attempts <= max_attempts; attempts++) {
        
        // 3. Prompt the user and read their guess
        printf("Attempt %d - Enter your guess: ", attempts);
        scanf("%d", &guess);

        // 4. Check if the guess is high, low, or correct
        if (guess == secret_number) {
            printf("Correct!\n");
            won = 1; // Mark that the user won
            break;   // 5. Stop the loop immediately
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    // 6. Print the final win or lose message
    if (won == 1) {
        printf("\nCongratulations, you win!\n");
    } else {
        printf("\nYou lose! You've used all %d attempts. The secret number was %d.\n", max_attempts, secret_number);
    }

    return 0;
}