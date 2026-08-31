/* Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, middle;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);
    middle = n % (int)pow(10, digits);
    middle = middle / 10;

    int result = last * (int)pow(10, digits) + middle * 10 + first;
    printf("%d\n", result);
    return 0;
}