/* Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>
int main() {
  int n, m;
  printf("Enter size of the first array: ");
  scanf("%d", &n);
  printf("Enter size of the second array: ");
  scanf("%d", &m);
  int arr1[n];
  int arr2[m];
  int arr3[n + m];
  for (int i = 0; i < n; i++) {
    printf("Enter the value for arr1[%d]: ", i);
    scanf("%d", &arr1[i]);
  }
  for (int i = 0; i < m; i++) {
    printf("Enter the value for arr2[%d]: ", i);
    scanf("%d", &arr2[i]);
  }
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      arr3[k] = arr1[i];
      i++;
    } else {
      arr3[k] = arr2[j];
      j++;
    }
    k++;
  }
  while (i < n) {
    arr3[k] = arr1[i];
    i++;
    k++;
  }
  while (j < m) {
    arr3[k] = arr2[j];
    j++;
    k++;
  }
  for (int i = 0; i < n + m; i++) {
    printf("%d ", arr3[i]);
  }
  return 0;
}