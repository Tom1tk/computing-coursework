#include <stdio.h>

int main()
{
    char name[20], response, grade;
    int mark;
    do {
      printf("Enter a student name: ");
      scanf("%s", name);
      printf("Enter the student’s mark: ");
      scanf("%d", &mark);
      printf("%s", name);
      printf(" recieves the grade: ");
      if (mark < 40){
        printf("F");
      }
      else if (mark <= 49){
          printf("D");
        }
          else if (mark <= 59){
            printf("C");
          }
            else if (mark <= 69){
              printf("B");
            }
            else {
              printf("A");
            }
      getchar();
      printf("\nDo you want to add another student? Type Y for yes and N for No ");
      scanf("%c", &response);
    } while (response == 'Y');
    return 0;
}
