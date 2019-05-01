#include <stdio.h>

int main() //Starts a function that will return an integer
{
    char name[20], response, grade; //Initialises 3 string variables
    int mark, Fcount=0, Dcount=0, Ccount=0, Bcount=0, Acount=0; //Initialises the marks integer variable
    do {  //Starts a do while loop
      printf("Enter a student name: "); //Asks the user to input the student name
      scanf("%s", name); //reads the input from the user and assigns the pointer to the variable "name" as a string
      printf("Enter the student's mark: "); //Asks the user to input the student's mark
      scanf("%d", &mark); //reads the input from the user and assigns the pointer to the variable "mark" as an integer
      printf("%s", name); //Outputs the name of the student from the variable "name"
      printf(" recieves the grade: "); //Outputs a string to form a sentence containing the student's name and grade
      if (mark < 40){ //Checks if the value of "mark" is less than 40
        printf("F"); //If so, the outputted grade is an F
      	Fcount = Fcount+1;
      	} //closes the if loop
      else if (mark <= 49){ //If the previous statement isn't true, checks to see if "mark" is less than or equal to 49
          printf("D"); //If so, the outputted grade is a D
          Dcount = Dcount+1;
      	} //closes the if loop
          else if (mark <= 59){ //If the previous statement also isn't true, checks to see if "mark" is less than or equal to 59
            printf("C"); //If so, the outputted grade is a C
            Ccount = Ccount+1;
	  } //closes the if loop
            else if (mark <= 69){ //If the previous statement also isn't true, checks to see if "mark" is less than or equal to 69
              printf("B"); //If so, the outputted grade is a B
              Bcount = Bcount+1;
	    } //closes the if loop
            else { //If all the previous statements are false then the grade must be higher than 69 so another if statement is not necessary
              printf("A"); //If so, the outputted grade must be an A
              Acount = Acount+1;
	    } //closes the if loop
      getchar(); //reads a single character from stdin
      printf("\n\nNumber of students with F: %d \nNumber of students with D: %d \nNumber of students with C: %d \nNumber of students with B: %d \nNumber of students with A: %d ", Fcount, Dcount, Ccount, Bcount, Acount);
      printf("\n\nDo you want to add another student? Type Y for yes and N for No\n");
      scanf("%c", &response);
    } while (response == 'Y');
    return 0;
}

/*
Assignment task 2

The program above reads from the keyboard names and marks of students. The
user is asked
after each student if they want to continue by entering another student or
exit the program.
a.   Comment the existing code.
b.   Write the code that displays for each student the grade achieved.
c.   Extend the program to count how many grades of A, B, C, D and F were
achieved.
Marking scheme:
1 mark for presenting the program in week 4
Up to 5 marks for items a. and b.
Up to 4 marks for item c.
You need to do items a. and b. before approaching item c.
*/
