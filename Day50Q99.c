/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char date[12];
  printf("Enter date in dd/mm/yyyy format: ");
  scanf("%s", date);
  int month = atoi(date + 3);
  switch (month) {
  case 1:
    printf("%c%c-Jan-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 2:
    printf("%c%c-Feb-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 3:
    printf("%c%c-Mar-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 4:
    printf("%c%c-Apr-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 5:
    printf("%c%c-May-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 6:
    printf("%c%c-Jun-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 7:
    printf("%c%c-Jul-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 8:
    printf("%c%c-Aug-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 9:
    printf("%c%c-Sep-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 10:
    printf("%c%c-Oct-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
    break;
  case 11:
    printf("%c%c-Nov-%c%c%c%c\n", date[0], date[1], date[6], date[7], date[8],
           date[9]);
  }
  return 0;
}