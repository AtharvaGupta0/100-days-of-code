/* Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
  char name[50];
  int id;
  float salary;
};

int main() {
  struct Employee e1, e2;
  FILE *fp;

  printf("Enter employee name: ");
  scanf("%s", e1.name);
  printf("Enter employee ID: ");
  scanf("%d", &e1.id);
  printf("Enter employee salary: ");
  scanf("%f", &e1.salary);

  fp = fopen("employee.dat", "wb");
  if (fp == NULL) {
    printf("Error creating file!\n");
    return 1;
  }
  fwrite(&e1, sizeof(struct Employee), 1, fp);
  fclose(fp);

  fp = fopen("employee.dat", "rb");
  if (fp == NULL) {
    printf("Error opening file for reading!\n");
    return 1;
  }
  fread(&e2, sizeof(struct Employee), 1, fp);
  fclose(fp);

  printf("\nEmployee Data Read from File:\n");
  printf("Name: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);

  return 0;
}
