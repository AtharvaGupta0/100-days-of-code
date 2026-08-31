/* Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int n, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (!hasOdd) product = 1;
    printf("%d\n", product);
    return 0;
}