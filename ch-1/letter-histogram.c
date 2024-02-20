#include <stdio.h>

int main() {
	int c, max;
	max = 0;

	int letters[26];
	for(int i = 0; i < 26; i++){
		letters[i] = 0;
	}
	while ((c = getchar()) != EOF) {
	  int letter;

	  if(c >= 'a' && c <= 'z'){
		  letter = c - 'a';
		  if (++letters[letter] > max) {
			  max = letters[letter];
		  }
		} else if(c >= 'A' && c <= 'Z'){	
			letter = c - 'A';
			if (++letters[letter] > max) {
				max = letters[letter];
			}
		}
	}

	for(int i = 0; i < 26; i++) {
		letters[i] = (int)(((float)letters[i] / max) * 100);
	}

	// Rendering a histogram is a lil wonky if you can't put a loop in printf
	for (int i = 100; i > 0; i = i-5){
		printf("%3i |", i);
		
		for (int j = 0; j < 26; j++) {
			if(letters[j] >= i) {
				printf(" #");
			} else {
				printf("  ");
			}
		}
		
		printf("\n");
	}

	for(int i = 0; i < 57; i++) {
		printf("_");
	}
	printf("\n     ");
	
	for(int i = 0; i < 26; i++) {
		printf(" %c", 'A' + i);
	}
	printf("\n");

	return 0;
}
