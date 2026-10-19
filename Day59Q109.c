/* Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Sample Test Cases:
Input 1:
arr = [100, 200, 300, 400], k = 2
Output 1:
700
Explanation: arr[2] + arr[3] = 700, which is maximum.

Input 2:
arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output 2:
39
Explanation: arr[1] + arr[2] + arr[3] + arr[4] = 39, which is maximum.

Input 3:
arr = [100, 200, 300, 400], k = 1
Output 3:
400
Explanation: arr[3] = 400, which is maximum.
*/

#include <stdio.h>

int main() {
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%d", max_sum);

    return 0;
}