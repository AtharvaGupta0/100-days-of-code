/* Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
  int o;
  printf("Enter the order of the Matrix");
  scanf("%d", &o);
  int arr[o][o];
  for (int i = 0; i < o; i++) {
    for (int j = 0; j < o; j++) {
      printf("Enter the element for %d row %d column", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  int sum = 0;
  for (int i = 0; i < o; i++) {
    sum = sum + arr[i][i];
  }
  printf("The sum of main diagonal elements is : %d", sum);

  return 0;
}