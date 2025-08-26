#include <stdio.h>
// fn declaration
float compute_gpa(char [], int);

// macro def
#define SIZE 4
// fn00 main
int main(void) {
    // sample array
    char grades[SIZE] = {'A', 'B', 'A', 'C'};

    printf("GPA = %.1f", compute_gpa(grades, SIZE));
}

// fn01 compute gpa
float compute_gpa(char grades[], int size) {
    float grades_sum = 0;
    float total_score_available = 16;
    float gpa = 0;
    for (int i = 0; i < size; i++) {
        switch (grades[i]) {
            case 'A': grades_sum += 4;
                break;
            case 'B': grades_sum += 3;
                break;
            case 'C': grades_sum += 2;
                break;
            case 'D': grades_sum += 1;
                break;
            case 'F': grades_sum += 0;
            default:
                break;
        }
    }
    gpa = (grades_sum / total_score_available) * 4;
    return gpa;
}