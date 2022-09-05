#include <stdio.h>

int calc(int price);
int fruits(int orange, int apple);
int main(void) {

  printf("%d", fruits(2, 3));
  return 0;
}

int calc (int price) {
  printf("%f", price * 1.1);
  return 0;
}

int fruits(int orange, int apple) {
  int sum = orange + apple;
  return sum;
}



  
