/* Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
  printf("Enter the order of matrix: ");
  int order;
  scanf("%d", &order);
  int a[order][order];

  for (int i = 0; i < order; i++) {
    for (int j = 0; j < order; j++) {
      printf("\nEnter element for row %d column %d:", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  int i = 0, j = 0;

  printf("%d ", a[i][j]);

  for (int s = 1; s <= 2 * order - 1; s++) {

    if (s % 2 != 0) {
      /*
       * Start next diagonal.
       * Move right if possible,
       * otherwise move down.
       */
      if (j < order - 1)
        j++;
      else
        i++;

      /*
       * Your logic:
       * i++, j--
       */
      while (i <= order - 1 && j >= 0) {
        printf("%d ", a[i][j]);
        i++;
        j--;
      }

      // Return to last valid position
      i--;
      j++;
    }

    else {
      /*
       * Start next diagonal.
       * Move down if possible,
       * otherwise move right.
       */
      if (i < order - 1)
        i++;
      else
        j++;

      /*
       *logic:
       * i--, j++
       */
      while (i >= 0 && j <= order - 1) {
        printf("%d ", a[i][j]);
        i--;
        j++;
      }

      // Return to last valid position
      i++;
      j--;
    }
  }

  return 0;
}