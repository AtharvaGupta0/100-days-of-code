/* Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  printf("Enter the first string: ");
  fgets(str1, sizeof(str1), stdin);
  printf("Enter the second string: ");
  fgets(str2, sizeof(str2), stdin);
  for (int i = 0; str1[i] != '\0'; i++) {
    for (int j = 0; str1[j] != '\0'; j++) {
      if (str1[j] > str1[j + 1]) {
        int temp = str1[j];
        str1[j] = str1[j + 1];
        str1[j + 1] = str1[j];
      }
    }
  }
  for (int i = 0; str2[i] != '\0'; i++) {
    for (int j = 0; str2[j] != '\0'; j++) {
      if (str2[j] > str2[j + 1]) {
        int temp = str2[j];
        str2[j] = str2[j + 1];
        str2[j + 1] = str2[j];
      }
    }
  }
  if (strcmp(str1, str2) == 0)
    printf("Both strings are anagrams\n");
  else
    printf("Strings are not anagrams\n");
  return 0;
}