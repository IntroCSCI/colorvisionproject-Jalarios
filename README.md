# !!!Replace with your unique project name!!!

## Description

My program will ask the user series of questions, which are different colors which are testing for Blue-yellow color blindness. It will keep track of how many colors they can distinguish from one another. This program will will be and can be expanded to ask more than the amount of questions I have written. 

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
!!!Replace with an example of the program running with user interaction!!!
```

## C++ Guide

### Variables and Data Types

I have used only two variable types to start with, which are string and int. I used the string variable to first be able to read out what is in the test files. The second string variable is to check the user's final choice which is asking if it wanted to resart the program. For the int variables I use them to get the user's answers and to count if they got the question correct or wrong. 

### Input and Output

To use the input and output effectively I any used cin when I previously asked a question to get a input from the user. For the output I used cout mainly since it is all I need for now, I also used the cout to help with readability and line spacing. 

### Decisions

For decision I only used the if, else if, and else statement. I used this statement to have it check to see what the user inputs to see if they are right or wrong with there answer. Within these statement it will count the right and wrong answers and display them at the end of the program. They also display a message after each user choice to hint at if they are right or wrong.

### Iteration

Iteration in my program is a do-while loop. I have used 3 do-while loops, the first is to loop the whole program if the user wants to resart at the end, the second and third do-while loop is for the if the user inputs a wrong choice that isn't a 1 or 2 for the questions.

### File Input and Output

For the file input and output, I only have 2 test files which I will need to replace later on with actucal color images for the test. For now I only have the program read out what is written in the file. Since I don't know how to use pixel colors yet that is my next step for this program. 