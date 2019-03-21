#include <stdio.h>

int main()
 {
   int arr[10], i, j, x=0, y=0, even[10], odd[10], big=0;
   char oe[10];

   printf("Input 10 numbers:\n");

   for (i = 0; i < 10; i++){
      scanf(" %d", &arr[i]);
    }

    for (i = 0; i < 10; i++){
      if(arr[i] % 2 == 0){
        oe[i] = 'e';
        even[y] = arr[i];
        y++;
      }
      else{
        oe[i] = 'o';
        odd[x] = arr[i];
        x++;
      }
    }
    printf("\n");

   for (i = 0; i < 10; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++){
       printf("%c ", oe[i]);
     }
    printf("\n\n");

     printf("The even numbers are: \n");
     for (i = 0; i < y; i++){
        printf("%d ", even[i]);
      }
      printf("\n");

      printf("The odd numbers are: \n");
      for (i = 0; i < x; i++){
         printf("%d ", odd[i]);
       }
      printf("\n");

      for (i = 0; i < x; i++){
        if(odd[i]>odd[i+1])
          big = odd[i];
       }

       if (big==0){
         printf("There were no odd numbers");
       }else{
       printf("The largest odd number is %d", big);
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
