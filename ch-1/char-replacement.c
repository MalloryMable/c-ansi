#include <stdio.h>

void main() {
	int c;

	while((c = getchar()) != EOF) {
		if(c == '\t') {
			printf("\b");
		} else if (c == '\\') {
			printf("\\\\");
		} else {
			printf("%c", c);
		}
	}
}
