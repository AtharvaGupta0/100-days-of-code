/* Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO
*/

#include <stdio.h>

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;

    printf("%s", s);

    return 0;
}