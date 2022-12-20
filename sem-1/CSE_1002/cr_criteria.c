// Class coordinator of thhe section 29 want to select the student class representative. A student is eligible to beocme class representative if he/she has scored minimum of 75% in 12th std or less than 15k ranking in the entrance test.

#include <stdio.h>

int main () {
  float boardExam12pc;
  int entranceTestRank;

  printf("Enter your 12th std board exam percentage: ");
  scanf("%f", &boardExam12pc);

  printf("Enter your entrance exam ranking: ");
  scanf("%d", &entranceTestRank);

  if (boardExam12pc >= 75 || entranceTestRank < 15000) {
    printf("Eligible to become CR");
  } else {
    printf("Not elibible to become CR");
  }

  return 0;
}