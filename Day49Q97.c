/* Q97: Print the initials of a name.
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter Your Full Name: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    //str[len]='/0';
    printf("Initials are: ");
    printf("%c. ",str[0]);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            printf("%c. ",str[i+1]);
        }
    }
    return 0;
}