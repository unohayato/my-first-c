#include <stdio.h>
int main(void) {
  int year = 1;
  double money = 1000000;
  while (money < 100000000) {
    year += 1;
    money *= 1.05;
  }

  printf("%d年目: %f円となり一億円を超えます", year, money);

  return 0;  
}


  
