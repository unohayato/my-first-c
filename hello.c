#include <stdio.h>

int calc(int price);
int fruits(int orange, int apple);
int main(void) {

  fruits(2, 2);
  return 0;
}

int calc (int price) {
  printf("%f", price * 1.1);
  return 0;
}

int fruits(int orange, int apple) {
  printf("%d", (orange * 200) + (apple * 2));
  return 0;
}



  
