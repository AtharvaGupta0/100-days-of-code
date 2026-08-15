/* Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>

int main() {
    float p, r, t, si, ci, amount = 1;
    int i;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    for (i = 0; i < t; i++)
        amount *= (1 + r / 100);

    ci = p * amount - p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);

    return 0;
}