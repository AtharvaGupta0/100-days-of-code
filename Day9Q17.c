/* Q17: Write a program to find the roots of a quadratic equation and categorize
them.


Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <math.h>
#include <stdio.h>
int main() {
  int a;
  int b;
  int c;
  printf("Enter a,b and c ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  double D = (double)b * b - 4.0 * a * c;
  if (D < 0.0) {
    printf("No real roots exist\n");
  } else if (D > 0.0) {
    double root1 = (-b + sqrt(D)) / (2.0 * a);
    double root2 = (-b - sqrt(D)) / (2.0 * a);
    printf("Root 1 = %f\n", root1);
    printf("Root 2 = %f\n", root2);
  } else {
    double root = -b / (2.0 * a);
    printf("Root = %f\n", root);
  }

  return 0;
}
