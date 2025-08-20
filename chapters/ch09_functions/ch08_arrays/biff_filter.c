#include <stdio.h>
#include <ctype.h>

#define EXCLAM_MARK_NUM 10
int main(void) {
    // variable init
    int letter;

    // input block
    printf("Enter message: ");

    // main code logic
    while ((letter = getchar()) != '\n') {

        // translation logic
        int biff = toupper(letter);
        switch (biff) {
            case 'A': printf("4");
                break;
            case 'B': printf("8");
                break;
            case 'E': printf("3");
                break;
            case 'I': printf("1");
                break;
            case 'O': printf("0");
                break;
            case 'S': printf("5");
                break;
            default:
                printf("%c", biff);
        }
    }
    for (int i = 0; i < EXCLAM_MARK_NUM; i++) {
        printf("!");
    }

    // end
    return 0;
}