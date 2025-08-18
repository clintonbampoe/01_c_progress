#include <ctype.h>
#include <stdio.h>

int main() {
    int vowel_count = 0, ch;

    printf("Enter a sentence: ");
    // run this loop until ch returns a line break character
    while ((ch = getchar()) != '\n' && ch != EOF) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowel_count++;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %d vowels. ", vowel_count);
    // end
    return 0;
}
