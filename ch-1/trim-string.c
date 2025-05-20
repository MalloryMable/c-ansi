#include <stdbool.h>
#include <stdio.h>

/* Replaces all sequences of blanks with a  single space*/

/* I considered a version that replaced sequences of blanks
 * with one of the longest type of blank used
 * but it required a lot of work esp if I don't know what
 * functions are in c yet so I went with the simple proof of
 * concept and moved on*/

int main() {
  int c;
  bool space = false;

  while ((c = getchar()) != EOF) {
    if (!space) {
      if (c == ' ' || c == '\t' || c == '\n') {
        space = true;
        printf(" ");
      } else {
        printf("%c", c);
      }
    } else {
      // De morganed version of the above conditional
      if (c != ' ' && c != '\t' && c != '\n') {
        space = false;
        printf("%c", c);
      }
    }
  }
}
