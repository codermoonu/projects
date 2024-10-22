#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TRIES 5
#define WORD_LIST_SIZE 5

void displayWord(char word[], char guessedLetters[], size_t wordLength) {
    for (size_t i = 0; i < wordLength; i++) {
        if (strchr(guessedLetters, word[i]) != NULL) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    const char *wordlist[WORD_LIST_SIZE] = {"programming", "computer", "language", "development", "function"};
    srand((unsigned int)time(0));  // Casting time to unsigned int

    char word[20];
    char guessedLetters[26] = {0};
    unsigned int tries = 0;  // Ensure both are unsigned
    int wordIndex = rand() % WORD_LIST_SIZE;

    strcpy(word, wordlist[wordIndex]);

    size_t wordLength = strlen(word);  // Use size_t instead of int

    printf("Welcome to Guess the Word Game!\n");
    printf("The selected word is: %s\n", word);  // Debugging statement

    while (tries < MAX_TRIES) {
        printf("\nCurrent word: ");
        displayWord(word, guessedLetters, wordLength);
        printf("Guessed Letters: %s\n", guessedLetters);
        printf("Enter a letter: ");

        char guess;
        scanf(" %c", &guess);  // Add space before %c to handle newlines

        printf("You guessed: %c\n", guess);  // Debugging statement
        printf("Guessed Letters so far: %s\n", guessedLetters);  // Debugging statement

        if (strchr(guessedLetters, guess) != NULL) {
            printf("You've already guessed that letter. Try again!\n");
            continue;
        }

        guessedLetters[strlen(guessedLetters)] = guess;
        guessedLetters[strlen(guessedLetters)] = '\0';

        if (strchr(word, guess) == NULL) {
            tries++;
            printf("Wrong Guess! You have %d tries left.\n", MAX_TRIES - tries);
        }

        // Check if all letters are guessed
        int allGuessed = 1;
        for (size_t i = 0; i < wordLength; i++) {
            if (strchr(guessedLetters, word[i]) == NULL) {
                allGuessed = 0;
                break;
            }
        }

        if (allGuessed) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            break;
        }
    }

    if (tries == MAX_TRIES) {
        printf("Sorry, you've run out of tries! The word was: %s\n", word);
    }

    return 0;
}