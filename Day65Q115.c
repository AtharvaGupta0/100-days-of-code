/* Q115: Write a program to take two strings s and t as inputs (assume all
characters are lowercase). The task is to determine if s and t are valid
anagrams, meaning they contain the same characters with the same frequencies.
Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
  char s[100], t[100];
  printf("Enter the first string: ");
  fgets(s, sizeof(s), stdin);
  printf("Enter the second string: ");
  fgets(t, sizeof(t), stdin);
  for (int i = 0; s[i] != '\0'; i++) {
    for (int j = 0; s[j] != '\0'; j++) {
      if (s[j] > s[j + 1]) {
        int temp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = s[j];
      }
    }
  }
  for (int i = 0; t[i] != '\0'; i++) {
    for (int j = 0; t[j] != '\0'; j++) {
      if (t[j] > t[j + 1]) {
        int temp = t[j];
        t[j] = t[j + 1];
        t[j + 1] = t[j];
      }
    }
  }
  if (strcmp(s, t) == 0)
    printf("Both strings are anagrams\n");
  else
    printf("Strings are not anagrams\n");
  return 0;
}
