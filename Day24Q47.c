/* Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main() {
  int n, i;
  printf("Enter the number of rows to be printed: ");
  scanf("%d", &n);
  for (i = 1; i <=n; i++) {
    for (int j = 0; j < i;j++) {
      printf("*");
    }
    printf("\n");
  }
}