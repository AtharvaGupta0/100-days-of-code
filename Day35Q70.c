/* Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

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
  printf("Enter the number of positions to rotate: ");
  int k;
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    int temp = arr[n - 1];
    for (int j = n - 1; j > 0; j--) {
      arr[j] = arr[j - 1];
    }
    arr[0] = temp;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}