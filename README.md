<h1 align="center">Computer Science 2024-25</h1>  
<br> </br>  

👨‍💻 Welcome to my **C Programming Basics Repository!** 🌟  

This repository contains the foundational C programming assignments I worked on during my Computer Science course in 2024-25. It's designed to demonstrate essential programming concepts through simple and interactive examples.  

📚 **What you'll find here:**  
- **🚀 Interactive programs:** From guessing games to dynamic loops.  
- **🔧 Practical concepts:** Input validation, loops, functions, and conditionals.  
- **🎉 Fun outputs:** Celebrate birthdays, greet users, and mimic animal sounds!  

These examples are perfect for beginners looking to grasp the basics of C programming. Feel free to explore, learn, and adapt these programs for your own projects!  

🔗 **Table of Contents**  
1. Example 1: [Guess the Number Program](#example-1-guess-the-number-program)  
2. Example 2: [Happy Birthday Program](#example-2-happy-birthday-program)  
3. Example 3: [Animal Sound Program](#example-3-animal-sound-program)  
4. Example 4: [Even Number Printer](#example-4-even-number-printer)  
5. Example 5: [Say Hello Program](#example-5-say-hello-program)
6. Example 6: [Numbers Divisible by 3 Program](#example-6-numbers-divisible-by-3-program)
7. Example 7: [Column Printer Program](#example-7-column-printer-program)
8. Example 8: [Array Sum and Average Program](#example-8-array-sum-and-average-program)
9. Example 9: [Dynamic Sum and Average Program](#example-9-dynamic-sum-and-average-program)
10. Example10: [Multiplication Table Program](#example-10-multiplication-table-program)

✨ Dive in and happy coding! 🚀  

<br> </br>

##  Example 1: *Guess the Number Program*

The user is prompted to guess a number between 1 and 5. The program ensures that the input is within the specified range and checks if the guessed number is correct.

>### How It Works
1. The program uses a `do-while` loop to repeatedly prompt the user until they enter a valid number (1 to 5).
2. Once a valid input is provided, the program checks whether the guess matches the predefined correct number (in this case, `3`).
3. If the guess is correct, the program displays:  
   **`You guessed right.`**
4. If the guess is incorrect, the program displays:  
   **`You guessed wrong.`**

>### Key Features
- **Input Validation:** Ensures that the user enters a number within the specified range (1 to 5).
- **Interactive Feedback:** Provides immediate feedback on the user's guess.

This program demonstrates basic concepts in C, including loops, conditionals, and input validation. It is a great example for beginners to understand how to manage user input and create simple logic-based programs.

<br> </br>

##  Example 2: Happy Birthday Program

This program repeatedly prints "Happy Birthday" based on the user's input for their age. It demonstrates the use of a `do-while` loop for controlled repetition.

>### How It Works
1. The program prompts the user to enter their age.
2. Using a `do-while` loop, the program prints "Happy Birthday" once for each year of the user's age.
3. The loop continues until the count matches the entered age.

>### Key Features
- **Dynamic Repetition:** The number of repetitions is determined by the user's input.
- **Simple Loop Logic:** Demonstrates the use of a `do-while` loop for beginners.
- **Interactive Output:** The program outputs a celebratory message for each year of age.

This program is an excellent example for beginners learning how to work with loops and user input in C. It combines basic input handling with simple repetition logic.

<br> </br>

## Example 3 : Animal Sound Program

This program asks the user if they have a "cat" or a "dog" and responds with the corresponding animal sound.

>### How It Works
1. The program prompts the user to input either `cat` or `dog`.
2. Based on the input:
   - If the input is `cat`, it prints: **`meow`**.
   - If the input is `dog`, it prints: **`woof`**.
3. For any other input, it prints: **`I don't know what sound that animal makes`**.


>### Key Features
- Simple input handling with `scanf`.
- String comparison using `strcmp`.
- Basic conditional logic with `if-else`.

This program is a fun way to practice handling strings and conditionals in C.

<br> </br>

## Example 4: Even Number Printer

This program prints all even numbers starting from 2 up to a specified value (`10` in this case). 

>### How It Works
1. The program initializes two variables:
   - `i` is set to `2` (the starting point).
   - `a` is set to `10` (the upper limit).
2. Using a `do-while` loop:
   - It prints the current value of `i`.
   - It increments `i` by `2` on each iteration.
3. The loop continues until `i` exceeds `a`.


>### Key Features
- Demonstrates the use of a `do-while` loop in C.
- Prints a sequence of even numbers within a defined range.

<br> </br>

## Example 5 :Say Hello Program

This program asks for the user's name and greets them with a personalized message.

>### How It Works
1. The program defines a function `sayHello` that:
   - Prompts the user to enter their name.
   - Reads the input and stores it in a character array.
   - Prints a greeting message with the entered name.
2. The `sayHello` function is called from the `main` function.

>### Key Features
- Demonstrates the use of a custom function in C.
- Includes basic user input handling with `scanf`.
- Provides a friendly and interactive output.

<br> </br>

## Example 6: Numbers Divisible by 3 Program  

This program prints all numbers from 99 to 51 that are divisible by 3 in descending order.


>### How It Works:
1. The program initializes an integer variable `i` to `99` (the starting point).  
2. Using a `do-while` loop:  
   - The program prints the current value of `i`.  
   - It decrements `i` by `3` in each iteration.  
3. The loop continues as long as `i` is greater than `50`.  



>### Key Features:
- **Descending Order:** Numbers are printed from largest to smallest.  
- **Divisibility Check:** Only numbers divisible by 3 are included.  
- **Efficient Looping:** The step size is optimized to skip non-relevant numbers.

<br> </br>

## Example 7: Column Printer Program  

This program prints a table with three columns by using two custom functions (`cl1` and `cl2`) alongside an iterative counter. Each row of the table is generated based on the index `i` from 1 to 10.


>### How It Works:
1. **Custom Functions:**
   - `cl1`: Multiplies the input value by `5` to generate values for the first column.  
   - `cl2`: Computes values for the second column using the formula:  
     `100 - ((b - 1) * 10 + 1)`  
   - The third column displays the loop index (`i`).  
2. **Looping Logic:**  
   - A `for` loop iterates from `1` to `10`.  
   - For each iteration, the values of the three columns are calculated and printed in a single line.



>### Key Features:
- **Custom Functionality:** Uses functions to generate dynamic values for each column.  
- **Organized Output:** Produces a neatly formatted table of values.  
- **Efficient Loop:** Iterates exactly 10 times, ensuring consistent and predictable output.

<br></br>

## Example 8: Array Sum and Average Program  

This program accepts 10 integers from the user, calculates their sum and average, and displays them alongside the entered numbers.

>### How It Works:
1. **Input Handling:**
   - The user is prompted to enter 10 integers.
   - Invalid input (non-integer values) is rejected with a prompt to re-enter.
2. **Sum and Average Calculation:**
   - The sum is accumulated as each valid number is entered.
   - The average is computed by dividing the sum by 10.
3. **Output:**
   - Displays the entered numbers, their sum, and their average.

>### Key Features:
- **Array Handling:** Stores user input in an integer array.
- **Input Validation:** Ensures only valid integers are accepted.
- **Floating-Point Arithmetic:** Computes average with precision.

<br></br>

## Example 9: Dynamic Sum and Average Program  

This program allows the user to continuously enter integers until they type `-1`, at which point the program calculates and displays the sum and average of the entered numbers.

>### How It Works:
1. **Input Handling:**
   - Prompts the user to enter integers.
   - The input `-1` stops the program.
   - Invalid inputs are rejected with an error message.
2. **Dynamic Sum and Average:**
   - Accumulates the sum and counts valid inputs.
   - Computes the average using the sum and count.
3. **Output:**
   - Displays the sum, average, and the count of valid numbers entered.

>### Key Features:
- **Flexible Input:** Allows any number of inputs before terminating.
- **Input Validation:** Ensures only integers are processed.
- **Dynamic Control:** Stops execution when `-1` is entered.

<br></br>

## Example 10: Multiplication Table Program  

This program prints a multiplication table for numbers 1 through 10 in a formatted grid.

>### How It Works:
1. **Nested Loops:**
   - Outer loop iterates through rows (`1` to `10`).
   - Inner loop iterates through columns (`1` to `10`).
   - The product of the current row and column index is calculated and printed.
2. **Formatted Output:**
   - Ensures each value is printed with consistent spacing for a neat table layout.

>### Key Features:
- **Nested Loops:** Demonstrates the use of loops within loops.
- **Formatted Printing:** Outputs a neatly aligned multiplication table.






















