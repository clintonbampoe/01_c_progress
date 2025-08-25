#include <ctype.h>
#include <stdio.h>

#define EXCLAM_MARK_NUM 10
int main(void) {
    // var init
    char message[100];
    int end_of_message = 0;

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);
    for (int i = 0; i < sizeof(message); i++) {             // removes newline character
        if (message[i] == '\n') {
            message[i] = '\0';
            end_of_message = i;
        }
    }

    for (int i = 0; i < end_of_message; i++) {
        char biff = (char)toupper(message[i]);
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

    // print x exclamation marks
    for (int i = 0; i < EXCLAM_MARK_NUM; i++) {
        printf("!");
    }
    printf("\n");
}