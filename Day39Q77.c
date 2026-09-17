/* Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main() {
  int r, c;
  printf("Enter number of rows and columns");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("Enter element for %d row %d column: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c && i < r; j++) {
      if (arr[i][i] == arr[j][j]) {
        printf("Elements are not distinct");
        return 0;
      }
    }
  }
  printf("Elements are distinct");
  return 0;
}