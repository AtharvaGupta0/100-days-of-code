/* Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
int main() {

  char str[100];
  printf("Enter your string: ");
  fgets(str, sizeof(str), stdin);
  for (int i = 0; str[i] != 0; i++) {
    if (str[i] == str[i + 1]) {
      printf("%c\n", str[i]);
      return 0;
    }
  }
  printf("No repeating characters");
  return 0;
}
