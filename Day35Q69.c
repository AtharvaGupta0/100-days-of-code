/* Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

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
  int max = arr[0];
  int second_max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      second_max = max;
      max = arr[i];
    } else if (arr[i] > second_max && arr[i] != max) {
      second_max = arr[i];
    }
  }
  printf("The second largest element is %d", second_max);
  return 0;
}