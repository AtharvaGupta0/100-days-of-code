/* Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

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
  printf("Enter the element to search: ");
  int search;
  scanf("%d", &search);
  for (int i = 0; i < n; i++) {
    if (arr[i] == search) {
      printf("Found at index %d", i);
      return 0;
    }
  }
  printf("-1");
  return 0;
}