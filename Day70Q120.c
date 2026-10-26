/* Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>

int main() {
  char str[1000];
  int i;
  int newWord;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  newWord = 1;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
      newWord = 1;
    } else if (newWord) {
      if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
      newWord = 0;
    } else {
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    }
  }

  printf("%s", str);
  return 0;
}
