/* Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

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
  printf("Enter the element to insert: ");
  int insert;
  scanf("%d", &insert);
  for (int i = 0; i < n; i++) {
    if (arr[i] > insert) {
      for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
      }
      arr[i] = insert;
      break;
    }
  }
  for (int i = 0; i < n + 1; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
