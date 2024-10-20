#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, attempts = 0;
    srand((unsigned int)time(0));
    number = rand() % 100 + 1;
    printf("Welcome to the Number Guessing game!\n");
    printf("Guess A number between 1 and 100\n");
    do
    {
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else if(guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);
    return 0;
}
