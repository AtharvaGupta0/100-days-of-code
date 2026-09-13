/* Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

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
  printf("Enter the position to insert: ");
  int pos;
  scanf("%d", &pos);
  for (int i = n; i > pos; i--) {
    arr[i] = arr[i - 1];
  }
  arr[pos] = insert;
  for (int i = 0; i < n + 1; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}