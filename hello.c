#include <stdio.h>


struct Test {
  char name[32];
  int ja;
  int ma;
  int en;
};

struct Test student[3] = {
  {"太郎", 40, 50, 60},
  {"二郎", 70, 80, 90},
  {"三郎", 10, 20, 100}
};


void line(void);

int main (void) {
  printf("%10s %10s %10s %10s\n", "名前", "国語", "算数", "英語");
  line();

  

  return 0;
};


void line (void) {
  int i;
  for (i = 0; i < 50; i++) {
    printf("-");
  };
  printf("\n");
  return;
};

  
