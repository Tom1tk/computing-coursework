#include <stdio.h>
#include <string.h>

int main (){

  int x, i, option;

  printf("How many students are in the class?: ");
  scanf(" %d", &x);

  int mark[x];
  char name[x][10];

  printf("\nInput %d student's names:\n", x);
  for (i = 0; i < x; i++){
     scanf(" %s", name[x]);
   }

  printf("\nPlease now enter the marks for each student\n");
  for (i = 0; i < x; i++){
     printf(" %c: ", name[i]);
     scanf(" %d", &mark[i]);
     printf("\n");
   }

  for(;;){

        printf("\n\nPlease select one of the following options.\n");
        printf(" 1. Input students' names and marks\n");
        printf(" 2. Display all the students' names and marks\n");
        printf(" 3. Display the highest mark in the class\n");
        printf(" 4. Display average class mark\n");
        printf(" 5. Exit\n");
        scanf("%d", &option);

      if (option==1){


      }else if (option==2){

            for (i = 0; i < x; i++){
               printf(" %c: ", name[i]);
               printf(" %d\n", mark[i]);
             }

     }else if (option==3){


     }else if (option==4){


     }else if (option==5){
       break;
     }
    }
return 0;
}



/*
Assignment task 8

Write a program that helps storing and processing the students’ marks. The program should be able to do the following tasks:
    • Read the students’ names and marks.
    • display all the students (the names and the marks)
    • find the highest mark and display the name of the student who got it.
    • find the average mark
The program should display a menu and give the user the possibility to choose any of the tasks above.

Hint: The students’ names and marks should be stored in arrays.


Marking scheme:
	2 marks for presenting the program in week 11 or 12.
	3 marks for writing the function that displays the menu.
	3 marks for the main() function that calls the other functions.
	4 marks for writing the function that reads the students’ names and marks.
4 marks for writing the function that displays the student’s name with the highest mark
4 marks for writing the function that calculates and displays the average markrmm


Example:
Menu
    1. Read the students’ names and marks.
    2. display all the students (the names and the marks)
    3. find the highest mark and display the name of the student who got it.
    4. find the average mark

The user selects option 1.
How many students: 3
student’s name: Ed
student’s mark: 67
student’s name: Robert
student’s mark: 75
student’s name: Ann
student’s mark: 80

The user selects option 2.
Ed 67
Robert 75
Ann 80

The user selects option 3.
Ann 80

The user selects option 4.
74
*/
