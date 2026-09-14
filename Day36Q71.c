/* Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main() {
  int r, c;
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
  printf("The matrix elements are:\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}