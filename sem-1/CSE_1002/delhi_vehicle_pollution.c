// Delhi government has issued a circular to control the pollution due to vehicle. It is allowed for the use of odd numbers registered vehicle on Monday, Wednesday and Friday and even number registered vehicles on Tuesday, Thursday and Saturday

#include <stdio.h>

int main () {
  int vehicleNum;

  printf("Enter your vehicle register number: ");
  scanf("%d", &vehicleNum);

  printf("You can drive your vehicle on the following days:\n");

  if (vehicleNum % 2 == 0) {
    printf("Tuesday, Thursday, Saturday");
  } else {
    printf("Monday, Wednesday, Friday");
  }

  return 0;
}