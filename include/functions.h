
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "config.h"


int selectRandomWord() {
    return rand() % MAX_WORDS;
}


void scrambleWord(char *original, char *scrambled) {
    int length = strlen(original);
    strcpy(scrambled, original);
    
   
    for (int i = 0; i < length; i++) {
        int j = rand() % length;
        char temp = scrambled[i];
        scrambled[i] = scrambled[j];
        scrambled[j] = temp;
    }
}


void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}


void displayWelcome() {
    printf("\n========================================\n");
    printf("   WELCOME TO WORD SCRAMBLE GAME!\n");
    printf("========================================\n");
    printf("Rules:\n");
    printf("- Guess the original word from scrambled letters\n");
    printf("- You have %d attempts per word\n", MAX_ATTEMPTS);
    printf("- Score 10 points for each correct answer\n");
    printf("========================================\n\n");
}


void getPlayerInput(char *input) {
    printf("Your guess: ");
    scanf("%s", input);
    toLowerCase(input);
}


int checkGuess(char *original, char *guess) {
    toLowerCase(original);
    toLowerCase(guess);
    return strcmp(original, guess) == 0;
}


void displayScore(int score, int totalWords) {
    printf("\n========================================\n");
    printf("         GAME OVER!\n");
    printf("========================================\n");
    printf("Your Final Score: %d / %d\n", score, totalWords * 10);
    printf("Words Correct: %d / %d\n", score / 10, totalWords);
    printf("========================================\n\n");
}

#endif