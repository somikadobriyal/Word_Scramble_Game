
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/config.h"
#include "../include/words.h"
#include "../include/functions.h"

int main() {
    int score = 0;
    int totalRounds = 5;
    char scrambled[MAX_LENGTH];
    char guess[MAX_LENGTH];
    
    
    srand(time(NULL));
    
   
    displayWelcome();
    
   
    for (int round = 1; round <= totalRounds; round++) {
        printf("\n--- Round %d of %d ---\n", round, totalRounds);
        
        
        int wordIndex = selectRandomWord();
        char originalWord[MAX_LENGTH];
        strcpy(originalWord, wordList[wordIndex]);
        
        
        scrambleWord(originalWord, scrambled);
        
       
        printf("Scrambled Word: %s\n", scrambled);
        
        
        int attempts = 0;
        int correct = 0;
        
        while (attempts < MAX_ATTEMPTS && !correct) {
            printf("Attempt %d of %d\n", attempts + 1, MAX_ATTEMPTS);
            
           
            getPlayerInput(guess);
            
            
            if (checkGuess(originalWord, guess)) {
                printf("✓ Correct! Well done!\n");
                score += 10;
                correct = 1;
            } else {
                attempts++;
                if (attempts < MAX_ATTEMPTS && !correct) {
                    printf("✗ Wrong! Try again.\n");
                }
            }
        }
        
        
        if (!correct) {
            printf("✗ Out of attempts! The word was: %s\n", originalWord);
        }
        
        printf("Current Score: %d\n", score);
    }
    
    
    displayScore(score, totalRounds);
    
    return 0;
}