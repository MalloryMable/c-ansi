#include <stdbool.h>
#include <stdio.h>

void squeeze(char s1[], char s2[]) {
  int i, j, k;
  bool match;

  for (i = k = 0; s1[i] != '\0'; i++) {
    match = false;
    for (j = 0; s2[j] != '\0'; j++) {
      if (s1[i] == s2[j]) {
        match = true;
        break;
      }
    }

    if (!match) {
      s1[k++] = s1[i];
    }
  }

  s1[k] = '\0';
}

int main() {
  // take inputs and test cases
  char phrase[] = "Be gay do crimes.";
  char keys[] = "aeio";

  squeeze(phrase, keys);

  printf("%s\n", phrase);

  return 0;
}
