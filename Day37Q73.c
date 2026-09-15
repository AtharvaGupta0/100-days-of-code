/* Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>
int main() {
  int r, c;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  int sum[r];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("Enter element for %d row %d column: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      sum[i] += arr[i][j];
    }
  }
  for (int i = 0; i < r; i++) {
    printf("%d ", sum[i]);
  }
  return 0;
}