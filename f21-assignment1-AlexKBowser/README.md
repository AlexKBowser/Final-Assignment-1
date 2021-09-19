# Introduction to Systems Programming, Fall 2021, Prof. McDaniel, Assignment #1 - C Programming Basics CMPSC311

## **Due date: September 17, 2021 (11:59pm)**

## Description

In this assignment you will develop a program to manage several data types, data structures and arrays. Please read the following instructions very carefully and perform the assignment per the instructions.

1. Login to your virtual machine. Create the repository through github classroom. Then from your virtual machine, clone the starter source code provided for this assignment (use the git helper document for the commands):

        % sudo apt -y install build-essential git gdb
        % mkdir cmpsc311
        % cd cmpsc311
        % git clone git@github.com:PSUCMPSC311/assign1-<username>.git
        % cd f21-assign1-<username>
        % [START EDITING] 

    Once cloned, you will have the starter source code files (cmpsc311-f21-assign1.c and a1support.h) in the assign1-<username> folder and a Makefile. The Makefile contains commands to compile your program from the source code. cmpsc311-f21-assign1.c contains the main function which reads in values from standard input, as well as calls the functions you are to create as part of this exercise. The a1support.h partially defines functions that you are to implement in the course of this assignment (see below).

2. You are to complete the cmpsc311-f21-assign1 program. The cmpsc311-f21-assign1 program receives 20 floating point values, one per line. The code for reading those values from standard input are provided in the assignment source code starter file.

3. You are to create a new file a1support.c. This will include the code for each of the functions defined in a1support.h. You are also to complete the function definitions in a1support.h.

4. Complete the code in the cmpsc311-f21-assign1.c and a1support.h files. Places where code or declarations needs to be added are indicated by ???. See in file comments for hints. The program shall perform the following functions in order as implemented within the main() function:

    A) Read in 20 float numbers into an array. (this code is provided to you).

    B) For each value in float arrays, convert as follows:
    - Numbers greater than of equal to 10 should be multiplied by π (The constant value of π is defined in the file math.h as M_PI).
    - Numbers less than 10 should be multiplied by 8.4.

    C) Declare and assign values to a second array of 20 integers, where the value is rounded absolute value of the float of the same index (i.e., integer at index 1 should be assigned the rounded absolute value of the float value at index 1).

    D) Implement a function (in a1support.c) to print out the values of the float and integer arrays, as below. Each function should take two values, the array length and the array itself. The functions are defined print array float (this function should print out the float values to three decimal places, one per line), and print array integer (this should be print the integer values, one per line).

    Call both functions in the main function.

    E) Implement two functions that compute the sum of values for each array and return the value; sum array float and sum array integer . Each function should take two values, the array length and the array itself. Call these two functions on the arrays and print out the result values.

    F) Create a function implementing Euclid’s algorithm (euclids algorithm) to calculate the greatest common divisor of two integers. The inputs to this function are two integers, a and b. See: http://en.wikipedia.org/wiki/Euclidean_algorithm

    G) In the main function, write a loop to compute and print out GCD of all adjacent values in the integer array using euclids algorithm, i.e., euclids algorithm(array[0], array[1]), euclids algorithm(array[1], array[2]), ..., euclids algorithm(array[19], array[20])

    H) Implement a selection sort that sorts the arrays in place; selection sort float and selection sort integer. Call both functions to sort in the main function, then print out the values using the print array integer and print array integer functions. For insight into how the selection sort works, see: http://en.wikipedia.org/wiki/Selection_sort

    I) You are to graph a multiplier of the sin function in a C function graph sin. More specifically, you are to graph the function y = sin(x ∗ mult) where mult is a floating point number passed into the graphing function. You will use text to graph the function as provided by the C printf function. The Y axis should go from -1.5 to 1.5 at 0.1 increments, and the X axis should go from -3.5 to 3.5 at 0.1 increments. Make label the axes as shown in the sample output.

    J) Call graph sin from the main function with four input values (1.0, 1.5, 2.0, and 3.0).

5. Add comments to all of your files stating what the code is doing. Fill out the comment function header for each function you are defining in the code. A sample header you can copy for this purpose is provided for the main function in the code.

6. The assignment starter package also includes a sample input (test-input1.txt) and output (test-output1.txt) which you can use to test your program. The test-input.txt file was input used to produce test-output1.txt. To test your program with these inputs, run the code an redirect in the input file to the program as follows:
    
        % ./cmpsc311-f13-assign1 < test-input1.txt


## Additional Notes

Please try to make the output for your program as close to that of the test program output. Feel free to create additional supporting functions within the same file if needed, and include function prototypes for these functions at the top of the file. Also be sure to add comments to all of your files stating what the code is doing. Fill out the comment function header for each function you are defining in the code. A sample header you can copy for this purpose is provided for the main function in the code. It is good practice to commit and push your code regularly in case you run into issues with your machine (Note: you must commit all files that are marked as changed when running 'git status').

Like all assignments in this class you are prohibited from copying any content from the Internet or discussing, sharing ideas, code, configuration, text or anything else or getting help from anyone in or outside of the class. Consulting online sources is acceptable, but under no circumstances should anything be copied. Failure to abide by this requirement will result dismissal from the class as described in our course syllabus.

## To turn in

**Submit on canvas both the commit ID that should be graded, as well as your github username**. Otherwise you will receive a 0 for the assignment.
Before submitting the commit ID, test it using the following commands (copy to and run in a temporary directory -- NOT the directory you used to develop the code):

    % cd <new code directory>
    % git clone git@github.com:PSUCMPSC311/f21-assign1-<username>.git
    % cd f21-assign1-<username>
    % make
    % ./cmpsc311-f13-assign1 < test-input1.txt
