/* Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
int main() {
  int r, c, sum = 0;
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);
  int arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("Enter the value of element at row: %d and column: %d: ", i + 1,
             j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      sum += arr[i][j];
    }
  }
  printf("The sum of all elements in the matrix is %d", sum);
  return 0;
}