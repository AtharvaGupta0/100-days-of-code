/* Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>
int main() {
  int n, i;
  printf("enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++) {
    printf("enter the %d element of array: ", i + 1);
    scanf("%d", &arr[i]);
  }
  int start = 0;
  int end = n - 1;
  while (start < end) {
    arr[start] = arr[start] + arr[end];
    arr[end] = arr[start] - arr[end];
    arr[start] = arr[start] - arr[end];
    start++;
    end--;
  }
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
