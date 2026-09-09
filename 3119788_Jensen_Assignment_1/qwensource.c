// genAI qwen3:1.7b
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
