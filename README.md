# CodSoft
These are series of tasks that was provided to me to complete as a part of internship.
The tasks are:
1. Simple Calculator
2. Number guessing game
3. To-do list
4. Image processing tool
5. Tic-Tac-Toe game

1. Simple Calculator: For simple calculator, I implemented basic arithemtic operations such as addition, subtraction, multiplication, division , and remainder. It is a menu driven program, and based on the operation required, it takes two numbers as input from the user performs chosen operation and displays the output. It is put in an infinite loop, so one can perform as many times as it wants. There is also a exit option that is put up, just in case, if one wishes to exit the calculator.
2. Number guessing game: For number guessing game, I used <cstdlib> header file as it contains rand() and srand() functions which are used in generating a random number. So the game generates a random number from 1 - 1000(I set the range), and the user is prompted to guess the number. If the guessed number is greater/lesser than the random number, then an hint message will be provided saying that it is higher/lower, however if he/she guesses it correctly, it falls out of the loop throwing an output congratulating the user and asks the user if want to play again. I have also used <time.h> header file for seeding the srand() function as whenever the program is run, it generates a new random number, which is not in the case when only rand() is used. srand() + rand() = new random number(every run of the program); rand() = same random number(every run of the program).
3. 
