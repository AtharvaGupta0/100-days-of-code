/* Q113: Write a program to take an integer array arr and an integer k as
inputs. The task is to find the kth smallest element in the array. Print the kth
smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
int main() {
  printf("Enter the size of your array: ");
  int n, k;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter %d element: ", i);
    scanf("%d", &arr[i]);
  }
  printf("Enter k: ");
  scanf("%d", &k);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  if (k == 1) {
    printf("%d smallest element is %d\n", k, arr[0]);
    return 0;
  }
  int kcount = 1;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] != arr[i + 1]) {
      kcount++;
      if (kcount == k) {
        printf("%d smallest element is %d\n", k, arr[i + 1]);
      }
    }
  }
  if (k < 1 || k > kcount) {
    printf("There are not enough distinct elements.\n");
  }
  return 0;
}