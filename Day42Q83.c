/* Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int main() {
    char s[100];
    int v = 0, c = 0;
    printf("Enter your string: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else
            c++;
    }

    printf("Vowels=%d, Consonants=%d", v, c);

    return 0;
}