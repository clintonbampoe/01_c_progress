#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


// macro def
#define ALPHABET 26
#define NOT_ANAGRAM 100


// fn00 main
int main(void) {

	// init array
	int ch_seen[ALPHABET];
	for (int i = 0; i < ALPHABET; i++) {
		ch_seen[i] = 0;
	}

	// first word input
	char ch;
	printf("Enter first word: ");
	while ((ch = tolower(getchar())) != '\n' && ch != EOF) {
		ch_seen[ch - 'a']++;
	}

	
	// second word input
	printf("Enter second word: ");
	while ((ch = tolower(getchar())) != '\n' && ch != EOF) {
		ch_seen[ch - 'a']--;
	}


	// check for anagram
	// is_anagram if all ch_seen elements are zero
	bool is_anagram;
	for (int i = 0; i < ALPHABET; i++) {
		if (ch_seen[i] == 0) {
			is_anagram = true;
		}
		else {
			is_anagram = false;
			printf("The words are not anagrams.\n");
			return NOT_ANAGRAM;
		}
	}


	// output
	if (is_anagram) {
		printf("The words are anagrams.\n");
	}


	// end
	return 0;
}