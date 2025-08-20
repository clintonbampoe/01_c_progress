#include <stdio.h>

int main() {
    int ten, grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    ten = grade / 10;

        printf("Letter grade: ");
        switch (ten) {
            case 9:
            case 10:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            case 5:     case 4:     case 3:    case 2:      case 1:     case 0:
                printf("F\n");
                break;
            default: printf("INVALID INPUT!\n");
        }
    return 0;
}