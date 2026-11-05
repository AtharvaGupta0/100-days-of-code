/* Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
  char name[50];
  enum Gender gender;
};

int main() {
  struct Person p;

  printf("Enter name: ");
  scanf("%s", p.name);

  char genderInput[10];
  printf("Enter gender (MALE/FEMALE/OTHER): ");
  scanf("%s", genderInput);

  if (strcmp(genderInput, "MALE") == 0)
    p.gender = MALE;
  else if (strcmp(genderInput, "FEMALE") == 0)
    p.gender = FEMALE;
  else
    p.gender = OTHER;

  printf("Name: %s | ", p.name);
  switch (p.gender) {
    case MALE:
      printf("Male\n");
      break;
    case FEMALE:
      printf("Female\n");
      break;
    case OTHER:
      printf("Other\n");
      break;
  }

  return 0;
}
