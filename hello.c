#include <stdio.h>


struct Fruits {
  int apple;
  int banana;
  int orange;
};

void price(struct Fruits store1);

int main (void) {
  struct Fruits store1 = {100, 200, 300};
  price(store1);
  return 0;
};

void price (struct Fruits store1) {
  printf("%d\n", store1.apple);
  printf("%d\n", store1.banana);
  printf("%d\n", store1.orange);
};


  
