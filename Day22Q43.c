/* Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int n, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n != 0) {
        sum += factorial(n % 10);
        n /= 10;
    }

    if (sum == original) printf("Strong number\n");
    else printf("Not strong number\n");

    return 0;
}