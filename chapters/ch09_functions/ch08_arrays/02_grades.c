#include <stdio.h>

#define NUM_QUIZ 5
#define NUM_STUD 5
#define WORD_COLUMN 15

int main(void) {
    // 01_variable init
    int student_total[NUM_STUD] = {0};
    int quiz_total[NUM_QUIZ] = {0};
    int score[NUM_QUIZ][NUM_STUD] = {0};

    // 02_input
    printf("Student Id: ");
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("%2d", stud + 1);
    }
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        char quiz_num_label[15];
        sprintf(quiz_num_label, "Quiz Num %d: ", quiz + 1);
        printf("\n%s",quiz_num_label);
        for (int student = 0; student < NUM_STUD; student++) {
            scanf("%d", &score[quiz][student]);
        }
    }

    // 03_summing each quiz scores
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        for (int student = 0; student < NUM_STUD; student++) {
            quiz_total[quiz] += score[quiz][student];
        }
    }

    // 04_summing each student scores
    for (int student = 0; student < NUM_STUD; student++) {
        for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
            student_total[student] += score[quiz][student];
        }
    }

    // 05_average score each student
    float avg_stud_score[NUM_STUD] = {0};
    for (int stud = 0; stud < NUM_STUD; stud++) {
        avg_stud_score[stud] = (float)student_total[stud] / 5;
    }

    // 06_average score each quiz
    float avg_quiz_score[NUM_QUIZ] = {0};
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        avg_quiz_score[quiz] = (float)quiz_total[quiz] / 5;
    }

    // 07_high score each quiz
    int high_score[NUM_QUIZ] = {0};
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        for (int stud = 0; stud < NUM_STUD; stud++) {
            if (score[quiz][stud] > high_score[quiz]) {
                high_score[quiz] = score[quiz][stud];
            }
        }
    }

    // 08_low score each quiz
    int low_score[NUM_QUIZ] = {0};
    // init array elements
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        low_score[quiz] = 100;
    }
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        for (int stud = 0; stud < NUM_STUD; stud++) {
            if (score[quiz][stud] < low_score[quiz]) {
                low_score[quiz] = score[quiz][stud];
            }
        }
    }

    // 09_print quiz total
    printf("%-*s", WORD_COLUMN,"Quiz No: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d",quiz + 1);
    }
    printf("\n%-*s", WORD_COLUMN,"Quiz totals: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d", quiz_total[quiz]);
    }
    printf("\n\n");

    // 10_printing student total
    printf("%-*s", WORD_COLUMN,"Student Id: ");
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("%10d", stud + 1);
    }
    printf("\n%-*s", WORD_COLUMN, "Total Score: ");
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("%10d", student_total[stud]);
    }
    printf("\n\n");

    // 11_print average score each student
    printf("%-*s", WORD_COLUMN, "Students: ");
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("%10d", stud + 1);
    }
    printf("\n%-*s", WORD_COLUMN, "Average Score: ");
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("%10.f", avg_stud_score[stud]);
    }
    printf("\n\n");

    // 12_print average score each quiz
    printf("%-*s", WORD_COLUMN,"Quiz: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d", quiz + 1);
    }
    printf("\n%-*s", WORD_COLUMN, "Average Score: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10.f", avg_quiz_score[quiz]);
    }
    printf("\n\n");

    // 13_print each quiz high score
    printf("%-*s", WORD_COLUMN,"Quiz: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d", quiz + 1);
    }
    printf("\n%-*s", WORD_COLUMN, "High Score: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d", high_score[quiz]);
    }
    printf("\n\n");

    // 14_print each quiz low score
    printf("%-*s", WORD_COLUMN, "Quiz: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d", quiz + 1);
    }
    printf("\n%-*s", WORD_COLUMN, "Low Score: ");
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("%10d", low_score[quiz]);
    }
    printf("\n\n");

    // 15_end
    return 0;
}