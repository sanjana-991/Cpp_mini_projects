# 🎯 Number Guessing Game (C++)

A beginner-friendly C++ console game where the computer randomly selects a number between **1 and 100**, and the player tries to guess it. The game provides hints after each guess until the correct number is found.

## Features
- 🎲 Random number generation
- 🔄 Unlimited guessing attempts
- 💡 Hints indicating whether the guess is too high or too low
- 📊 Displays the total number of attempts taken to guess correctly

## Technologies Used
- C++
- Standard Library (`iostream`, `cstdlib`, `ctime`)

## How to Run
1. Compile the program:
   ```bash
   g++ main.cpp -o game
   ```
2. Run the executable:
   ```bash
   ./game
   ```

## Sample Output
```
Enter the number you choose between 1 to 100: 50
Your guess is smaller!, enter bada

Enter the number you choose between 1 to 100: 75
Your guess is larger!, enter chota

Enter the number you choose between 1 to 100: 68
Congrats!!, you succeeded in 3 attempts.
```

## Learning Outcomes
- Random number generation using `rand()` and `srand()`
- Conditional statements (`if-else`)
- Loops (`do-while`)
- User input and output handling
