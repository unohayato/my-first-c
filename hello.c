#include <stdio.h>


struct Fruits {
  int apple;
  int banana;
  int orange;
};


int main (void) {

  struct Fruits store1 = {100, 200, 300};
  printf("%d\n", store1.apple);
  printf("%d\n", store1.banana);
  printf("%d\n", store1.orange);


  return 0;
}



  
