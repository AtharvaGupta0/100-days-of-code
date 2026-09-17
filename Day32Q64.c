/* Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int count[10] = {0};
  while (n > 0) {
    int digit = n % 10;
    count[digit]++;
    n /= 10;
  }
  int max = 0;
  int max_digit = 0;
  for (int i = 0; i < 10; i++) {
    if (count[i] > max) {
      max = count[i];
      max_digit = i;
    }
  }
  printf("The digit that occurs most times is %d", max_digit);
  return 0;
}