#include <stdio.h>
int main(void) {
  int apple;
  scanf("%d", &apple);
  if (apple > 10) printf("10より大きいです");
  if (apple < 10) printf("10より小さいです。");
  if (apple == 10) printf("10と等しいです。");
}