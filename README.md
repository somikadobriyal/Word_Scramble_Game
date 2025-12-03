# Word Scramble Game 🎮

A fun console-based word scramble game built in C where players test their vocabulary skills by unscrambling words!

## Description

Challenge yourself to unscramble words in this interactive console game. You'll face 5 rounds of scrambled words, with 3 attempts per word. Score 10 points for each correctly guessed word and see if you can achieve a perfect score!

## Repository Structure

```
Word_Scramble_Game/
├── assets/
├── docs/
│   ├── flowchart_somika.png
│   ├── flowchart_somika.txt
│   └── Project_Report_Somika.pdf
├── include/
│   ├── config.h
│   ├── functions.h
│   └── words.h
├── src/
│   └── game.c
├── .gitignore
└── README.md
```

## Prerequisites

- A C compiler (GCC recommended)
- Terminal or Command Prompt access

## Build Instructions

1. **Navigate to the project directory:**
   ```bash
   cd Word_Scramble_Game
   ```

2. **Compile the program:**
   ```bash
   gcc -o word_scramble src/main.c -Iinclude
   ```

3. **Run the game:**
   - On Linux/Mac:
     ```bash
     ./word_scramble
     ```
   - On Windows:
     ```bash
     word_scramble.exe
     ```

## How to Play

1. The game will display a scrambled word
2. Type your guess and press Enter
3. You have 3 attempts per word
4. Complete all 5 rounds to see your final score
5. Each correct answer awards 10 points (Maximum score: 50 points)

## Game Rules

- **Rounds:** 5 words per game
- **Attempts:** 3 tries per word
- **Scoring:** 10 points for each correct guess
- **Input:** Type your answer and press Enter

## Author

Somika

---

**Good luck and have fun unscrambling! 🧩**
