#include <stdio.h>


struct Student
{
  int year;
  char name;
  int weight;
  int height;
};



int main (void) {

  struct Student Tarou;
  Tarou.year = 3;

  printf("%d", Tarou.year);

  return 0;
}



  
