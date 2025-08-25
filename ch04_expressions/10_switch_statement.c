#include <stdio.h>

int main() {
    int grade = 2;
    int num_passing, total_grades;

    switch (grade) {
        case 4: printf("Excellent\n");
            break;
        case 3: printf("Good\n");
            break;
        case 2: printf("Average\n");
            break;
        case 1: printf("Poor\n");
            break;
        case 0: printf("Failing\n");
            break;
        default: printf("Invalid grade\n");
            break;
    }
}