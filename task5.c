#include <stdio.h>

int main()
 {
   int arr[10], oe[10], i, j;

   printf("Input 10 numbers:\n");

   for (i = 0; i < 10; i++){
      scanf(" %d", &arr[i]);
    }

    for (i = 0; i < 10; i++){
      if(arr[i] % 2 == 0){
        'e' = &oe[i];
      }
      else{
        'o' = &oe[i];
      }

    }

   for (i = 0; i < 10; i++){
      printf("%d ", arr[i]);
      printf("%d ", oe[i]);
    }
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
