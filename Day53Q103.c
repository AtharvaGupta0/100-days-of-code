/* Q103: Write a Program to take an array of integers as input, calculate the
pivot index of this array. The pivot index is the index where the sum of all the
numbers strictly to the left of the index is equal to the sum of all the numbers
strictly to the index's right. If the index is on the left edge of the array,
then the left sum is 0 because there are no elements to the left. This also
applies to the right edge of the array. Print the leftmost pivot index. If no
such index exists, print -1.

Sample Test Cases: Input 1: nums = [1,7,3,6,5,6]
Output 1:
3
Explanation: The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6
= 11.

Input 2:
nums = [1,2,3]
Output 2:
-1
Explanation: There is no index that satisfies the conditions in the problem
statement.

Input 3:
nums = [2,1,-1]
Output 3:
0
Explanation: The pivot index is 0. Left sum = 0 (no elements to the left), Right
sum = 1 + (-1) = 0.

Follow-up(optional): Try to solve this in O(n) TC
*/

#include <stdio.h>

int main() {
  printf("Enter the size of array");
  int n;
  scanf("%d", &n);

  int nums[n];

  for (int i = 0; i < n; i++) {
    printf("Enter the element %d of array: ", i + 1);
    scanf("%d", &nums[i]);
  }
  int high = nums[n - 1];
  int low = nums[0];
  while (low <= high) {
    int lsum = 0;
    int rsum = 0;
    int mid = (low + high) / 2;
    for (int i = 0; i < mid; i++) {
      lsum += nums[i];
    }
    for (int i = mid + 1; i < n; i++) {
      rsum += nums[i];
    }
    if (lsum == rsum) {
      printf("The pivot index is %d", mid);
      return 0;
    } else if (lsum < rsum) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  printf("-1");
  return 0;
}