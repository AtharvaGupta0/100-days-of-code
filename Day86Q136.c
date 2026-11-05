/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
  char op[20];
  int x, y;

  printf("Enter operation (ADD/SUBTRACT/MULTIPLY) and two numbers: ");
  scanf("%s %d %d", op, &x, &y);

  enum Menu choice;

  if (strcmp(op, "ADD") == 0)
    choice = ADD;
  else if (strcmp(op, "SUBTRACT") == 0)
    choice = SUBTRACT;
  else
    choice = MULTIPLY;

  switch (choice) {
    case ADD:
      printf("%d\n", x + y);
      break;
    case SUBTRACT:
      printf("%d\n", x - y);
      break;
    case MULTIPLY:
      printf("%d\n", x * y);
      break;
  }

  return 0;
}
