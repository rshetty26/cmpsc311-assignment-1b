Below are the files in this assignment and their descriptions

1. student.h: a header file with the declarations of the functions that you will implement.

2. student.c: a source file in which you will implement the functions whose declarations appear in student.h. In other words, you will provide the definitions of the functions declared in student h. (Your changes are required only in this file)

3. reference.h: a header file with the declarations of the functions that are identical to those defined in student.h except they are prefixed with reference. These are the reference functions against which your implementations will be tested.

4. reference.o: an object file that contains the reference implementations of the functions declared in reference.h. This is a binary file that contains compiled reference implementations of functions.

5. tester.c: unit tests for the functions that you will implement. Each unit test passes an input to your implementation of a function and to the reference implementation of the same function and compares the outputs. This file will compile into an executable, tester.o, which you will run to see if you pass the unit tests.

6. Makefile Makefile: instructions for compiling and building tester used by the make utility

Note: Although you only need to edit student.c for successfully completing the assignment, you can modify any file you want if it helps you in some way. When testing your submission, however, we will use the original forms of all files except student.c. So make sure you revert all the changes and still check all your tester pass. Do not forget to add comments to your code to explain your implementation choices.

Below are the functions implemeneted:
1. Swap - Takes a pointer to two integers and swaps the values of integers.

2. Modify Array - Takes an array of integers and their length as input and modifies the array according to the following conditions.
  If the number is positive, then the element must be doubled.
  If the number is negative, then add to the number.
  If the number is zero, leave it unmodified.

3. Nth Fibonacci number - Takes an integer n as input and returns the nth fibonacci number. The nth term in the Fibonacci Series is defined as:
  F(0) = 0, F(1) = 1
  F(n) = F(n - 1) + F(n - 2), for n > 1

4. Median - Takes an array and the length of the array as input and returns the median of the given array. (Length of array >=1)

5. BubbleSort - Takes an array and their length as input and sort the array using Bubble sort

6. Armstrong number - Takes an integer n as input and returns 1 if the number is an Armstrong number and return 0 otherwise. A number is said to be an Armstrong number if the some of each digit raised to the power of the number of digits gives the original number. For example, 371 is an Armstrong number because 371 = 3^3 + 7^3  + 1^3. In this case, since the number of digits were 3, each digit was raised to the power of 3. For the sake of simplicity of the assignment, your assignment will only be graded with three digit numbers.
  
7. Palindrome - Takes a string (character array) and the string length as input and returns 1 if the given string is a Palindrome and return 0 otherwise.
