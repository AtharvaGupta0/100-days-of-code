/* Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world
This is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>

int main() {
  FILE *fp;
  char filename[100];
  int ch;
  int characters = 0;
  int words = 0;
  int lines = 0;
  int inWord = 0;

  printf("Enter filename: ");
  scanf("%s", filename);

  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("File not found!\n");
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    characters++;
    if (ch == '\n') {
      lines++;
    }
    if (ch == ' ' || ch == '\n' || ch == '\t') {
      inWord = 0;
    } else if (!inWord) {
      inWord = 1;
      words++;
    }
  }

  if (characters > 0 && lines == 0) {
    lines = 1;
  }

  fclose(fp);

  printf("Characters: %d\n", characters);
  printf("Words: %d\n", words);
  printf("Lines: %d\n", lines);

  return 0;
}
