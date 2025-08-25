#include <stdio.h>

#define NUM_STUD 5
#define NUM_QUIZ 5
// NOTE: check all instances of matrix grades;
int main(void) {
    // 00_var init
    int grades[NUM_STUD][NUM_QUIZ] = {0};
    int stud_total[NUM_STUD] = {0};
    int quiz_total[NUM_QUIZ] = {0};

    // 01_input
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("Enter grades for stud %d: ",stud + 1);
        for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
            scanf("%d", &grades[stud][quiz]);
        }
    }

    // 02_summing each stud total
    for (int stud = 0; stud < NUM_STUD; stud++) {
        for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
            stud_total[stud] += grades[stud][quiz];
        }
    }

    // 03_summing each quiz total
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        for (int stud = 0; stud < NUM_STUD; stud++) {
            quiz_total[quiz] += grades[stud][quiz];
        }
    }

    // 04_average score each student
    float avg_score_stud[NUM_STUD] = {0};
    for (int stud = 0; stud < NUM_STUD; stud++) {
        avg_score_stud[stud] = (float)stud_total[stud] / 5;
    }

    // 05_average score each quiz
    float avg_score_quiz[NUM_QUIZ] = {0};
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        avg_score_quiz[quiz] = (float)quiz_total[quiz] / 5;
    }

    // 06_high score each quiz
    int high_score[NUM_QUIZ] = {0};
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        for (int stud = 0; stud < NUM_STUD; stud++) {
            if (grades[stud][quiz] > high_score[quiz]) {
                high_score[quiz] = grades[stud][quiz];
            }
        }
    }

    // 07_low score each quiz
    int low_score[NUM_QUIZ] = {0};
    // 07_1 init array elements to 100
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        low_score[quiz] = 100;
    }
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        for (int stud = 0; stud < NUM_STUD; stud++) {
            if (grades[stud][quiz] < low_score[quiz]) {
                low_score[quiz] = grades[stud][quiz];
            }
        }
    }

    // 08_print each student total and average each student
    for (int stud = 0; stud < NUM_STUD; stud++) {
        printf("Student %d:  ", stud + 1);
        printf("Total = %d,  ", stud_total[stud]);
        printf("Average = %.2f", avg_score_stud[stud]);
        printf("\n");
    }

    // 09_print quiz statistics
    // avg_quiz_score, high_score each quiz, low_score each quiz
    for (int quiz = 0; quiz < NUM_QUIZ; quiz++) {
        printf("Quiz %d:  ", quiz + 1);
        printf("Average = %.2f,  ", avg_score_quiz[quiz]);
        printf("High = %d,  ", high_score[quiz]);
        printf("Low = %d", low_score[quiz]);
        printf("\n");
    }
}