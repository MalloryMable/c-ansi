#include <stdio.h>

int main() {
	int c, count;
	
	count = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			count ++;
		}
	}
	printf("%d\n", count);

	return 0;
}
