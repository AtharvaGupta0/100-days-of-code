/* Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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
      if (arr[i][j] == trr[i][j]) {
        printf("Matrix are symmetric\n");
        return 0;
      }
    }
  }
  printf("Matrix are not symmetric\n");

  return 0;
}
