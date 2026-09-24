/* Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
int main() {
  char str[100];
  int count = 0;
  printf("Enter your string\n");
  fgets(str, sizeof(str), stdin);
  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }
  for (int i = 0; i < count; i++) {
    if (str[i] != str[count - i - 1]) {
      printf("Not palindrome\n");
      return 0;
    }
  }
  printf("Palindrome\n");
  return 0;
}