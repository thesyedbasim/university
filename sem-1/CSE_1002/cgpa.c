// John is a final year student. As part of his assessments he has appeared for all the assessments and has obtained a certain CGPA. He would like to know his final grade based on the CGPA that he obtained.

#include <stdio.h>

int main () {
  float cgpa;

  printf("Enter your CGPA: ");
  scanf("%f", &cgpa);

  if (cgpa >= 9) {
    printf("Outstanding");
  } else if (cgpa < 9 && cgpa >= 7) {
    printf("Excellent");
  } else if (cgpa < 7 && cgpa >= 5) {
    printf("Good");
  } else if (cgpa < 5 && cgpa >=4) {
    printf("Pass");
  } else {
    printf("Fail");
  }

  return 0;
}