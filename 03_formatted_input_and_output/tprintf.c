// Prints int and float values in various forms

#include <stdio.h>

int main(void) {
    int i;
    float x;

    i = 40;
    
    x = 839.21f;

    printf("|%d| %5d|%-5d|%5.3d| \n", i, i, i, i);
    printf("|%10.3f|%10.3e|%10g| \n ", x, x, x);

    // Exercises
    float a = 30.253f;
    printf("%12.5e\n", a);

    float b = 83.162;
    printf("%.4f\n", b);

    float c = .0000009979;
    printf("%-6.2g\n",c);

    // Displaying floating point variable D in various formats
    float d = 12.50;
    printf("|%-8.1e|\n",d);

    printf("|%10.6e| \n", d);

    printf("|%-8.3f|\n",d);

    printf("|%6.f| \n", d);
    return 0;
}
