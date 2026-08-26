/* Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
int main() {
  int num, temp, digit = 0, sum = 0;

  printf("enter a number: ");
  scanf("%d", &num);

  temp = num;
  while (temp != 0) {
    temp /= 10;
    digit++;
  }

  temp = num;
  while (temp != 0) {
    int d = temp % 10;
    int p = 1;
    for (int i = 0; i < digit; i++) {
      p *= d;
    }

    sum += p;
    temp /= 10;
  }

  if (sum == num) {
    printf("%d is an armstrong number\n", num);
  } else {
    printf("%d is not an armstrong number\n", num);
  }

  return 0;
}