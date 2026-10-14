/* Q95: Check if one string is a rotation of another.
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
# include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2),stdin);
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    if (l1 != l2)
    {
        printf("Not rotation\n");
        return 0;
    }
    for (int i = 0; i < l1; i++) {
        char temp = str1[l1 - 1];
        for (int j = l1 - 1; j > 0; j--) {
            str1[j] = str1[j - 1];
    }
        str1[0] = temp;
        if (strcmp(str1,str2)==0) {
            printf("Strings are rotation \n");
            return 0;
        }
    }
    printf("Strings are not rotation \n");
    return 0;
}

        
        

