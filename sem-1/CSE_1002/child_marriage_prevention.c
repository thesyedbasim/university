// Child marriage is prevalent even today in many parts of the country, to prevent this menace the government has brought in a resolution stating the minimum age requirement for boys. The government needs a set of validations to confirm the eligibility of a person for marriage.
// Boys >= 21 & Girls >= 18

#include <stdio.h>

int main () {
  char gender;
  int age;

  printf("Enter the gender [M/F]: ");
  scanf("%c", &gender);

  printf("Enter your age: ");
  scanf ("%d", &age);

  if (gender == 'M' && age >= 21) {
    printf("You are eligible for marriage");
  } else if (gender == 'M' && age < 21) {
    printf("You are not eligible for marriage");
  }

  if (gender == 'F' && age >= 18) {
    printf("You are eligible for marriage");
  } else if (gender == 'F' && age < 18) {
    printf("You are not eligible for marriage");
  }

  return 0;
}