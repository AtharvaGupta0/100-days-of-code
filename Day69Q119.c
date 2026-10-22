/* Q119: Write a program to take an integer array as input. Only one element
will be repeated. Print the repeated element. Try to find the result in one
single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
int main() {
  int n, rep, repi;
  rep = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the %d element: ", i);
    scanf("%d", &arr[i]);
    if (i != 0 && arr[i] == arr[i - 1]) {
      rep++;
      repi = i;
    }
  }
  if (rep > 0) {
    printf("%d", arr[repi]);
  }
  return 0;
}
