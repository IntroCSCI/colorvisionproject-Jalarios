# Test For Knowledge of Color Blindness

## Description

My program will ask the user series of questions, which are different general knowledge questions about color blindness. It will keep track of how many answers they can have correct. This program will will be and can be expanded to ask more than the amount of questions I have written. 

## Developer

Joseph Larios

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
 g++ -std=c++11 main.cpp -o cvp; ./cvp
Hello and Welcome to Testing Your knowledge of Color Blindness. 
The test will begin easy at the start and will progressively get harder.

=============================================

Let's bring up the first question.

How many types of Color Blindness are there?

1.) 4

2.) 2

Which choice is correct? (Please selecr 1 or 2)
1
Good choice!


=============================================


Here is Question 2.

Which Color Blindness is the most common? 

1.) Blue-yellow color blindness

2.) Red-green color blindness

Which choice is correct? (Please select 1 or 2)
2
Good job!


=============================================


Here is Question 3.

What perectange of people have Red-green color blindess? 

1.) 10% of males and 1% of females

2.) 8% of males and .05% of females

Which choice is correct? (Please select 1 or 2)
1 
Nice Try!

Your final score is 
                       2 Correct answers!
                       1 Incorrect answers!

You most know a lot about color blindness!

Do you want to restart? (y or n)
n

Thank you for your particpation!
```

## C++ Guide

### Variables and Data Types

I have used only two variable types to start with, which are string and int. I used the string variable to first be able to read out what is in the test files. The second string variable is to check the user's final choice which is asking if it wanted to restart the program. For the int variables I use them to get the user's answers and to count if they got the question correct or wrong. 

### Input and Output

To use the input and output effectively I any used cin when I previously asked a question to get a input from the user. For the output I used cout mainly since it is all I need for now, I also used the cout to help with readability and line spacing. 

### Decisions

For decision I only used the if, else if, and else statement. I used this statement to have it check to see what the user inputs to see if they are right or wrong with there answer. Within these statement it will count the right and wrong answers and display them at the end of the program. They also display a message after each user choice to hint at if they are right or wrong.

### Iteration

Iteration in my program is a do-while loop. I have used 4 do-while loops, the first is to loop the whole program if the user wants to resart at the end, the second, third, and fourth do-while loop is for the if the user inputs a wrong choice that isn't a 1 or 2 for the questions.

### File Input and Output

For the file input and output, I only have 3 test files which will have the question and choices. For now I only have the program read out the questions in the files.
