/* Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>
int main() {
  int r, c;
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  int trr[c][r];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("Enter element for %d row %d column: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      trr[j][i] = arr[i][j];
    }
  }
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      printf("%d ", trr[i][j]);
    }
    printf("\n");
  }

  return 0;
}