#include <stdio.h>
#include <string.h>

int main(void) {

  char str [15];
  char str1 [] = "Star";
  char str2 [] = "Wars";
  int s = 4;
  sprintf(str, "%s%s%d", str1, str2, s);
  printf("%s", str);



  
  return 0;
}







  
