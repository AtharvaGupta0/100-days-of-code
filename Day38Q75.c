/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2

1 2
3 4

2 2

5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
  int r1, c1, r2, c2;
  printf("Enter number of rows and columns for first matrix: ");
  scanf("%d %d", &r1, &c1);
  int arr[r1][c1];
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      printf("Enter element for %d row %d column: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
    printf("\nEnter number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    int arr2[r2][c2];
    for (int i = 0; i < r2; i++) {
      for (int j = 0; j < c2; j++) {
        printf("Enter element for %d row %d column: ", i + 1, j + 1);
        scanf("%d", &arr2[i][j]);
      }
    }
    if (r1 != r2 && c1 != c2) {
      printf("Cannot add the two matrices (dimension mismatch)");
      return 0;
    }
    int arr3[r1][c1];
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c1; j++) {
        arr3[i][j] = arr[i][j] + arr2[i][j];
      }
    }
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c1; j++) {
        printf("%d ", arr3[i][j]);
      }
      printf("\n");
    }
  }
}