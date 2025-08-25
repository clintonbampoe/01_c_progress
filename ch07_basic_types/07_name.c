    #include <ctype.h>
    #include <stdio.h>

    int main(void) {
        int first_name_char, ch;
        char last_name[20];
        // Input for first character of first name
        printf("Enter your name: ");
        scanf(" %c", &first_name_char);

        while ((ch = getchar()) != ' ')             // flush every character until the space character
            // empty loop
            ;
        scanf(" %s", last_name);

        // print output
        printf("%s, %c.", last_name, toupper(first_name_char));

        // end
        return 0;
    }