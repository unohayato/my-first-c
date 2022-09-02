#include <stdio.h>
int main(void) {
  int value;
  printf("%d", (int) (3.14*3*3));
  scanf("%d", &value);
  printf("数値は%dです", value);
  int apple = 10;
  if (apple) printf("りんごは0個ではありません");
  return 0;
}