#include <stdio.h>
#include <curses.h>
int main(){
  int a=5, b=3;
  int c, d;
  c = a + b;
  d = a - b;
  printf("\n%d = %d + %\n", c, a, b);
  printf("\n%d = %d - %\n", d, a, b);
  getch();
  return 0;
}
