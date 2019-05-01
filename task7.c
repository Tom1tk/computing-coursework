#include <stdio.h>

int smallest(int num1, int num2)
{
  if(num1 > num2){
    return num2;
  }else
  return num1;
}

int main()
{
  int arr[10], pos[10], i, x, j=0, small;

  printf("How many numbers?:");
  scanf(" %d", &x);
  printf("\nInput %d numbers:\n", x);
  for (i = 0; i < x; i++){
     scanf(" %d", &arr[i]);
   }

  for (i = 0; i < x; i++){
     if(arr[i]>0){
      pos[j] = arr[i];
      j++;
    }
   }

   small = pos[0];
   for (i = 1; i < j; i++){
      small = smallest(small, pos[i]);
    }

  printf("The smallest positive number is: %d\n", small);

return 0;
}



/*
Assignment task 7

Write a program that reads any number of integers, and prints the smallest positive number that was entered. The program should have the main() function and a function that takes two parameters num1 and num2 and returns the minimum value between the two.

Marking scheme:
	1 mark for presenting the program in week 10.
	4 marks for writing the function that finds the minimum between two numbers.
	5 marks for using the minimum function in the main() function.

Example:
Input:
	7 numbers
	9 5 2 -4 6 7 -5
Output:
	The smallest positive number is 2.
*/
