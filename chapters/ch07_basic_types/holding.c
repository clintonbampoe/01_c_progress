
#include <stdio.h>

int main() {
    int characters = 0, ch;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n') {
        if(ch != ' ' && ch != '\n') {
            characters++;
        }
    }
    printf("%d", characters);
    return 0;
}