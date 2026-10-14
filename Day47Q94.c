/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>
int main() {
  char sen[100];
  printf("Enter you sentence: ");
  fgets(sen, sizeof(sen), stdin);
  int len = strlen(sen);
  int maxlen = 0;
  char maxword[100];
  int currentlen = 0;
  for (int i = 0; sen[i] != '\0'; i++) {
    while (sen[i] != ' ' && sen[i] != '\0') {
      currentlen++;
      if (currentlen > maxlen) {
        maxlen = currentlen;
        strncpy(maxword, &sen[i - currentlen + 1], maxlen);
      }
      i++;
    }
    currentlen = 0;
  }
  maxword[maxlen] = '\0';
  printf("%s", maxword);
  return 0;
}