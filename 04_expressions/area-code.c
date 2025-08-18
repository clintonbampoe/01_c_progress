#include <stdio.h>

int main() {
    int area_code;

    printf("Please enter your area code: ");
    scanf("%d", &area_code);

   switch (area_code) {
       case 404: case 470: case 678: case 770:
           printf("Atlanta\n");
           break;

       case 706: case 762:
           printf("Columbus\n");
           break;

       case 229:
           printf("Albany\n");
           break;

       case 912:
           printf("Savanna\n");
           break;

    default:
           printf("Area code not recognized!");
   }
    return 0;
}