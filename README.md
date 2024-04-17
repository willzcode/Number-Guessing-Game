# number-guessing-game
This is a simple C++ program for a number guessing game where the player has to guess a randomly generated number between 1 and 10.

## Instructions

1. Clone this repository to your local machine.
2. Open the terminal and navigate to the directory where the program files are located.
3. Compile the program using a C++ compiler. For example, you can use `g++`:
   ```bash
   g++ number_guessing_game.cpp -o number_guessing_game
   ```
4. Run the compiled program:
   ```bash
   ./number_guessing_game
   ```

## Gameplay

1. The program will generate a random number between 1 and 10.
2. You will be prompted to enter a guess within this range.
3. After each guess, the program will inform you if your guess was too high or too low.
4. Keep guessing until you correctly guess the number.
5. The program will display the number of tries it took to guess the correct number.

## Example

```
******NUMBER GUESSING GAME******
Enter a guess between (1 - 10): 5
Too high
*********************************
Enter a guess between (1 - 10): 3
Too low
*********************************
Enter a guess between (1 - 10): 4
CORRECT! number of tries: 3
*********************************
```

## Note

- The `srand(time(NULL))` function seeds the random number generator based on the current time, ensuring a different random number on each program run.
- The `rand() % 10 + 1` generates a random number between 1 and 10.
- The program uses a `do-while` loop to continue prompting the user for guesses until the correct number is guessed.
