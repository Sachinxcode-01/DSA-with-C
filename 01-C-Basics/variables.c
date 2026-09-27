#include <stdio.h>

int main() {
  char name[] = "Sachin";
  int age = 18;
  float height = 5.4;
  char grade = 'A';

  printf("Name = %s\n", name);
  printf("Age = %d\n", age);
  printf("Height = %.1f\n", height);
  printf("Grade = %c\n", grade);

  return 0;
}