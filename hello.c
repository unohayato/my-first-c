#include <stdio.h>


struct Student
{
  int year;
  char name[64];
  int weight;
  int height;
}Tarou;



int main (void) {

  Tarou.year = 3;

  printf("%d", Tarou.year);

  return 0;
}



  
