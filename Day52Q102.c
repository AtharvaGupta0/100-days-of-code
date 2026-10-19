/* Q102: Write a Program to take a sorted array arr[] and an integer x as input,
 find the index (0-based) of the smallest element in arr[] that is greater than
or equal to x and print it. This element is called the ceil of x. If such an
element does not exist, print -1. Note: In case of multiple occurrences of ceil
of x, return the index of the first occurrence.

    Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
Explanation: Smallest number greater than 5 is 8, whose index is 2.

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1
Explanation: No element greater than 20 is found. So output is -1.

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0
Explanation: Smallest number greater than 0 is 1, whose indices are 0 and 1. The
index of the first occurrence is 0.

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2
Explanation: If x is directly present, return the index of its first occurrence.

Follow-up(optional): Can you do it in O(log n) Time Complexity?
*/

#include <stdio.h>

int main() {

  printf("Enter the size of your array: ");
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    printf("Enter %d element: ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Enter your target element: ");
  int x;
  scanf("%d", &x);

  if (arr[n - 1] < x) {
    printf("-1\n");
  } else {
    for (int i = 0; i < n; i++) {
      if (arr[i] >= x) {
        printf("%d\n", i);
        break;
      }
    }
  }
  return 0;
}
