#include <stdio.h>

int main()
{
    char answer;
    int chances;
    int score=0;


    printf("Here is a quiz to test your knowledge of movies...\n\n");
    for (chances=0; chances < 3; ++chances){
      printf("Question 1\n");
      printf("What's the name of the second part of the Lord of the Ring trilogy ?\n");
      printf("a. The Return Of The King\n");
      printf("b. Return Of The Shadow\n");
      printf("c. The Two Towers\n");
      printf("Make your choice: ");
      fflush(stdin);
      scanf(" %c", &answer);
      printf("chances: %d \n", chances);
        if (answer == 'c'){
        	++score;
          printf("Correct!\nCurrent score is %d \n", score);
        	break;
        }
  	  printf("Incorrect! Try again\n\n");
    }
    if (chances == 0){
    	printf("Incorrect! The correct answer was c \n");
    	}
  	printf("\nNext question!\n\n");


    for (chances=0; chances < 3; ++chances){
      printf("Question 2\n");
      printf("In The Hobbit, How many Dwarves went with Frodo to reclaim the Lonely mountain from Smaug?\n");
      printf("a. 13\n");
      printf("b. 6\n");
      printf("c. 100\n");
      printf("Make your choice: ");
      scanf(" %c", &answer);
        if (answer == 'a'){
          ++score;
          printf("Correct!\nCurrent score is %d", score);
          break;
        }
      printf("Incorrect! Try again\n\n");
    }
    if (chances == 0){
      printf("Incorrect! The correct answer was a \n");
      }
  	printf("\nNext question!\n\n");


    for (chances=0; chances < 3; ++chances){
      printf("Question 3\n");
      printf("How many rings of power were created?\n");
      printf("a. 3\n");
      printf("b. 20\n");
      printf("c. 1\n");
      printf("Make your choice: ");
      scanf(" %c", &answer);
        if (answer == "b"){
          ++score;
          break;
        }
      printf("Incorrect! Try again\n\n");
    }
    if (chances == 0){
      printf("Incorrect! The correct answer was b \n");
      printf("Final score is %d", score);
      }
    printf("\nThe end!");
}

/*Assignment task 4

In this task, you are given a starter program. It is a simple quiz with one multiple choice question about movies. Your task is to extend this program's functionality.

Extend the quiz in the following ways:
    a. Introduce some feedback if the answer is not correct.
    b. Give the user two chances to get the question right then tell them the answer.
    c. Include two more questions about movies in your quiz.
    d. Keep a score of how many questions the user gets right.
Marking scheme:
	1 mark for presenting the program in week 6.
	4 marks for items a. and c.
	2 marks for item b.
	3 marks for item d.
*/
