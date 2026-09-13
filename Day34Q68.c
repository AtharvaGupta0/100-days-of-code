/* Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter %d element: ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to delete: ");
  int delete;
  scanf("%d", &delete);
  for (int i = 0; i < n; i++) {
    if (arr[i] == delete) {
      for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
      }
      break;
    }
  }
  for (int i = 0; i < n - 1; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}