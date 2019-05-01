#include <stdio.h>
#include <string.h>

int x, i, option, stID, highest, avg=0;
int mark[30];
char name[30][10];

void printMenu()
{
      printf("\nPlease select one of the following options.\n");
      printf(" 1. Input students' names and marks\n");
      printf(" 2. Display all the students' names and marks\n");
      printf(" 3. Display the highest mark in the class\n");
      printf(" 4. Display average class mark\n");
      printf(" 5. Exit\n");
}

void students()
{
      printf("How many students are in the class? (max 30): ");
      scanf("%d", &x);

      printf("\nInput %d student's names:\n", x);
      for (i = 0; i < x; i++){
         fflush(stdin);
         scanf("%s", name[i]);
       }

      printf("\nPlease enter the marks for each student\n");
      for (i = 0; i < x; i++){
         printf("%s: ", name[i]);
         scanf(" %d", &mark[i]);
         printf("\n");
       }
}

void printStudents()
{
      for (i = 0; i < x; i++){
         printf("%s: ", name[i]);
         printf("%d\n", mark[i]);
      }
}

void highMark()
{
      highest = mark[0];
       for (i = 1; i < x; i++){
          if (mark[i] > highest){
            highest = mark[i];
            stID = i;
          }
      }
      printf("The student with the highest mark is %s with a mark of: %d\n", name[stID], highest);
}

void averageMark()
{
      for (i = 0; i < x; i++){
         avg += mark[i];
      }
      avg /= x;
      printf("The average mark of the class is: %d\n", avg);
}


int main ()
{
  for(;;){

        printMenu();
        scanf("%d", &option);

      if (option==1){

        students();

      }else if (option==2){

        printStudents();

     }else if (option==3){

        highMark();

     }else if (option==4){

        averageMark();

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
