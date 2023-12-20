#include "student.h"
#include <stdio.h>


void swap(int *a, int *b) {
  //Enter code here
  int x = *a;
  *a = *b;
  *b = x;
}

void modifyarray(int array[], int length) {
  //Enter code here
  int i;
  for (i = 0; i < length; i++) {
    if (array[i] > 0) { // If it is positive, the multiply by two
      array[i] = array[i] * 2;
    }
    else if (array[i] < 0) {// If it is negative, then add two
      array[i] = array[i] + 2;
    }
  }
}

int nthfibonacci(int n) {
  //Enter code here
  if (n <= 0) { 
    return 0; //When it's zero, return zero
  }
  else if (n == 1 || n == 2) {
    return n - 1; //When it's one or two, return the number minus one
  }
  else {
    return nthfibonacci(n - 1) + nthfibonacci(n - 2); //When it's not 1, 2, 3, recursively call itself with given formula
  }
}

double median(int array[], int length) {
  //Enter code here
  int middle = length / 2; // finds the center of the array
  if (length % 2 == 0) {// if it is even, 
    return ((array[middle] + array[middle - 1]) / 2); // then avg. the middle two indices
  }
  else { // if isn't even (odd)
    return array[middle]; //then return the middle index
  }
}

void bubblesort(int array[],int length) {
  //Enter code here
  int x;
  int y;
  for (x = 0; x < length - 1; x++) { // stops right before the last index to avoid out of bounds error
    for (y = 0; y < length - x - 1; y++) { // sets the largest at the end of the current swap
      if (array[y] > array[y + 1]) { // swaps adjacent indices
        int z = array[y];
        array[y] = array[y + 1];
        array[y + 1] = z;
      }
    }
  }
}

int armstrong(int n) {
  //Enter code here
  int square = n;
  int num_digits = 0; // stores the number of digits
  while (square > 0) {
    num_digits += 1; // iterate
    square = square / 10; // find the next digit
  }
  int cube = n;
  int sum = 0; // stores the sums of cubes of sigits
  while (cube > 0) {
    sum += (cube % 10) * (cube % 10) * (cube % 10); //cubing
    cube = cube / 10; //find the next digit
  }
  return sum == n; // if its equal, return true, else return false
}

int palindrome(char str[], int length) {
  //Enter code here
  int leftIndex = 0; // index from the left
  int rightIndex = length - 1; // index from the right
  while (rightIndex > leftIndex) {
    if (str[leftIndex] != str[rightIndex]) {
      return 0; //aborts function if it runs into one unmatching character
    }
    leftIndex = leftIndex + 1;  
    rightIndex = rightIndex - 1; //moving through the word
  }
  return 1;
}