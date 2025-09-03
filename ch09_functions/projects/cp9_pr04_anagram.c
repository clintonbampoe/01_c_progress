#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>


// macro def
#define ALPHABET 26
#define NOT_ANAGRAM 100


// fn declaration
void read_word(int[]);
bool equal_array(int [ALPHABET], int [ALPHABET]);



// fn00 main
int main(void) {

	// var init
	int counts1[ALPHABET] = { 0 };
	int counts2[ALPHABET] = { 0 };

	// read first word
	read_word(counts1);
	// read second word
	read_word(counts2);


	// check if both words are anagrams
	bool is_equal = equal_array(counts1, counts2);

	// output
	if (is_equal) {
		printf("The words are anagrams");
	}
	else {
		printf("The words are not anagrams");
	}
}


// fn01 read word
void read_word(int counts[]) {
	// init array
	for (int i = 0; i < ALPHABET; i++) {
		counts[i] = 0;
	}

	// word input
	char ch;
	printf("Enter first word: ");
	while ((ch = toupper(getchar())) != '\n' && ch != EOF) {
		counts[ch - 'A']++;
	}
}


// fn02 equal array (checks for anagram)
bool equal_array(int counts1[ALPHABET], int counts2[ALPHABET]) {
	bool is_equal = false;
	for (int i = 0; i < ALPHABET; i++) {
		if (counts1[i] == counts2[i]) {
			is_equal = true;
		}
		else {
			return false;
		}
	}
	return true;
}