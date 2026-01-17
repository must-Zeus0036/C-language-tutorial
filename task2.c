#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int random_num;
    int guess;
    int attempts = 0;

    srand(time(0));

    random_num = rand() % 100 + 1; // Random number between 1 and 100

    printf("Guess the number between 1 and 100: \n");

    // do-while loop to allow multiple attempts
    do {
        printf("Enter your guess: ");

        attempts++;

        if(guess < random_num) {
            printf("Too low! Try again.\n");

        } else if(guess > random_num) {
            printf("Too high! Try again.\n");

        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", random_num, attempts);
        }
    } while(guess != random_num);


    return 0;
}

