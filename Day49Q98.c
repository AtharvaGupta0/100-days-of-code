/* Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter Your Full Name: ");
    fgets(str, sizeof(str), stdin);
    printf("Initials are: ");
    printf("%c. ",str[0]);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            printf("%c. ",str[i+1]);
            printf("%s",str+i+1);
        }
    }
    return 0;
}