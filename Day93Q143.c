/* Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student {
  char name[50];
  int roll;
  int marks;
};

int main() {
  struct Student students[3];
  int i;

  printf("Enter details of 3 students (name roll marks):\n");
  for (i = 0; i < 3; i++) {
    printf("Student %d: ", i + 1);
    scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
  }

  int maxIndex = 0;
  for (i = 1; i < 3; i++) {
    if (students[i].marks > students[maxIndex].marks)
      maxIndex = i;
  }

  printf("Topper: %s (Marks: %d)\n", students[maxIndex].name,
         students[maxIndex].marks);

  return 0;
}
