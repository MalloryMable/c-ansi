#include <stdio.h>
#include <stdbool.h>

int main() {
	int c;
	bool blank;

	blank = false;

	while((c = getchar()) != EOF) {
		if((blank == false) && (c == ' ' || c == '\n' || c == '\t')) {
			blank = true;
		} else if ((blank == true) && !(c == ' ' || c == '\n' || c == '\t')) {
			printf("\n%c", c);
			blank = false;
		} else {
			printf("%c", c);
		}
	}

	return 0;
}
