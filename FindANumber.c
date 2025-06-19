#include <stdio.h>
#include <stdlib.h>

int main() {
    

    int correctNumber = (rand() % 101);
    int userNumber;
    int attempts;

    printf("Hi! In this game you need to guess a number between 1 and 100\n\n");

    for (attempts = 7; attempts > 0; attempts--) {
        printf("Choose a number: ");
        scanf("%d", &userNumber);

        if (correctNumber != userNumber) {
            int difference = correctNumber - userNumber;

            if (difference >= 1 && difference <= 5) {
                printf("Holly molly! You are so close to guessing. Go up a little bit\n");
            } else if (difference >= 6 && difference <= 10) {
                printf("You are so close to guessing. Go up\n");
            } else if (difference >= 11 && difference <= 20) {
                printf("You are close to guessing. Go up\n");
            } else if (difference > 20) {
                printf("Go up\n");
            } else if (difference >= -5 && difference <= -1) {
                printf("Holly molly! You are so close to guessing. Go down a little bit\n");
            } else if (difference >= -10 && difference <= -6) {
                printf("You are so close to guessing. Go down\n");
            } else if (difference >= -20 && difference <= -11) {
                printf("You are close to guessing. Go down\n");
            } else if (difference < -20) {
                printf("Go down\n");
            }

            printf("You have %d attempts left\n\n", attempts - 1);
        } else {
            printf("WOW! You guessed the number. Good job!\n");
            return 0;
        }
    }

    printf("Game over! You ran out of attempts. The number was %d\n", correctNumber);

    return 0;
}