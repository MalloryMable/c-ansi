#include <stdio.h>

int any(char s1[], char s2[]) {
  int i, j;

  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }

  return -1;
}

int main() {
  char phrase[] = "Where is my first a";
  char key[] = "a";

  printf("%d\n", any(phrase, key));

  return 0;
}
