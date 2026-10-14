/* Q96: Print all sub-strings of a string.
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Substrings are: ");
    for(int i= 0; i <len; i++){
        char sub[100];
        for ( int j = 0; j<len-i; j++){
            sub[j]= str[i+j];
            sub[j+1] = '\0';
            printf("%s,",sub);
        }

    }
    return 0;
}