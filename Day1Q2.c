/* Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main(){
  int num1=0, num2=0, sum=0, diff=0, product=0, quotient=0;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  sum = num1 + num2;
  diff = num1 - num2;
  product = num1 * num2;
  if(num2 !=0){
    quotient = num1 / num2;
      printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
  } else {
    printf("Cannot divide by zero.\n");
      printf("Sum=%d, Diff=%d, Product=%d, Quotient=N/A\n", sum, diff, product);
  }
 
  return 0;
}