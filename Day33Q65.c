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
  int s, size;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  int arr[size];
  for (int i = 0; i < size; i++) {
    printf("Enter %d element: ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("\nEnter the element to search: ");
  scanf("%d", &s);
  int low = 0;
  int high = size - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == s) {
      printf("Found at index %d", mid);
      return 0;
    }
    if (arr[mid] < s) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  printf("-1");
  return 0;
}