/* Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

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
  int x;
  printf("enter a number to search : ");
  scanf("%d", &x);
  for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      printf("Found at index %d", i);
      return 0;
    }
  }
  printf("-1");
  return 0;
}