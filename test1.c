#include <stdio.h>

int main(){

  int last, counter=0, number, number2, counter2;
  int first=0;

  printf("please enter the number: ");
  scanf(" %d", &number);

  number = number2;
  last = number % 10;

  while(number2 > 10){
    number2 = number2 / 10;
    ++counter;
  }

  ++counter; //counter will always be 1 short

  counter = counter2;

  while(counter2 != 0, counter2--){
    number / 10;
  }
  number = last;

  first = number2;

  printf("The first digit of the number is: %d\n", first);
  printf("The last digit of the number is: %d\n", last);
  printf("The number of digits in the number is %d\n", counter);

  return 0;
}
