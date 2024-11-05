#include <stdio.h>

int main(){

  int a = 0;
  int b = 1;
  int c;
  // c = a && b; // intersection
  // c = a || b; // union
  // c = (a == 1 && b == 0) ? 1 : 0; // difference
  c = !(a && b) && (a || b); // symmetric differnece

  printf("Result: %d", c);

  return 0;
}
