// CHAPTER 7: BASIC TYPES
// PROJECT 13
#include <stdio.h>

int main(void) {
    // Initializing variables
    int ch; // Variable to hold each character read
    int character_count = 0; // Counts total characters that are part of words
    int word_count = 1;      // Counts words, starts at 1 for the first word

    // Prompt for sentence input
    printf("Enter a sentence: ");

    // Read characters until newline is encountered
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            // If a space is encountered, it marks the end of a word (or separates words)
            word_count++;
        }
        else {
            // If it's not a space (including punctuation), it's part of a word's length
            character_count++;
        }
    }

    // Calculate average word length, ensuring float division
    float average_word_length = (float) character_count / (float) word_count;

    // Display the result formatted to one decimal place
    printf("Average word length: %.1f\n", average_word_length);

    return 0; // Indicate successful execution
}