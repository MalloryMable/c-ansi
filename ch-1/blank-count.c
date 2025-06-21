#include <stdio.h>

/* Counts new lines, blanks, and tabs */

int main() {
  int c, blanks;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      ++blanks;
    }
    printf("%d\n", blanks);
  }

  return 0;
}
