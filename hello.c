#include <stdio.h>
#include <string.h>

void calc(int x, int y, int *a1, int *a2);


int main(void) {

  int plus, minus;
  calc(30, 10, &plus, &minus);
  printf("%d\n", plus);
  printf("%d\n", minus);

  return 0;
}


void calc(int x, int y, int *a1, int *a2) {
  *a1 = x + y;
  *a2 = x - y;
}




  
