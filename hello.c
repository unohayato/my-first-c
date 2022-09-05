#include <stdio.h>

int calc(int price);
int main(void) {

  calc(300);
  return 0;
}

int calc (int price) {
  printf("%f", price * 1.1);
  return 0;
}



  
