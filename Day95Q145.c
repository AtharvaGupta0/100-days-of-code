/* Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
  char name[50];
  int roll;
  int marks;
};

struct Student findTopper(struct Student students[], int n) {
  int i;
  int maxIndex = 0;
  for (i = 1; i < n; i++) {
    if (students[i].marks > students[maxIndex].marks)
      maxIndex = i;
  }
  return students[maxIndex];
}

int main() {
  struct Student students[3];
  int i;

  printf("Enter details of 3 students (name roll marks):\n");
  for (i = 0; i < 3; i++) {
    printf("Student %d: ", i + 1);
    scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
  }

  struct Student topper = findTopper(students, 3);

  printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll,
         topper.marks);

  return 0;
}
