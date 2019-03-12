#include <stdio.h>

int main()
 {
   int arr[10], i, c;
   printf("Input 10 numbers:\n");
   //scanf("%d%d%d%d%d%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
   for (c >= '0' && c <= '9')
      ++arr[c-'0'];

   for (i = 0; i < 10; ++i)
      scanf(" %d", arr[i]);

   for (i = 0; i < 10; ++i)
      printf(" %d", arr[i]);
   return 0;
 }

/*
Assignment task 5

1. Write a piece of code that asks the user to input 10 integers, and then prints the largest positive number that was entered.
2. Extend the program to also print the largest odd number that was entered.  If no odd number was entered, it should print a message to that effect.

Marking scheme:
	1 mark for presenting the program in week 7.
	5 marks for item 1.
	4 marks for item 2.
*/
