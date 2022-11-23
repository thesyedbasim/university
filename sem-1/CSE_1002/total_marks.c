// Raju has appeared for an assesment in 3 different courses.

// The faculty advisor of Raju likes to know the following:
// a. total marks
// b. average marks

#include <stdio.h>

int main () {
  int marks1, marks2, marks3, total;
  float average;

  printf("Enter subject 1 marks: ");
  scanf("%d", &marks1);

  printf("Enter subject 2 marks: ");
  scanf("%d", &marks2);

  printf("Enter subject 3 marks: ");
  scanf("%d", &marks3);

  total = marks1 + marks2 + marks3;
  average = total / 3;

  printf("The total marks obtained by Raju is: %d \n", total);
  printf("The average marks obtained by Raju is: %f", average);

  return 0;
}