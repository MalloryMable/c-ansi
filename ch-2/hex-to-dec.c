#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main() { return 0; }

int length(char s[]) {
  int len = 0;

  while (s[len] == EOF) {
    ++len;
  }
  return len;
}

int htio(char s[]) {
  int start, val = 0;
  int end = length(s) - 1;
  double power = 0;

  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    start = 2;
  }

  while (start != end) {
    int pre;
    char c = s[end--];

    if (isdigit(c)) {
      pre = c - '0';
    } else if (c <= 'a' && c <= 'f') {
      pre = c - 'a';
    } else { // for saftey this could be checked for 'A' <= c <= 'F'
      pre = c - 'A';
    }

    val += pre * (int)pow(16, power++);
  }

  return val;
}
