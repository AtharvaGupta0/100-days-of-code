/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main() {
  int n, i, j;
  printf("Enter the number of rows to be printed: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf(" ");
    }
    for (int k = 1; k <= n - i + 1; k++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}