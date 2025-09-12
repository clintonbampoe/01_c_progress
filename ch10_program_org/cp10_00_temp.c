#include <stdio.h>

int main(void) {
	char digit[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			digit[i][j] = ' ';
		}
	}
	
	digit[0][0] = ' ', digit[0][2] = ' '; digit[2][0] = ' ';
	digit[0][1] = '__', digit[1][1] = '_', digit[2][1] = '_';
	digit[1][0] = '|', digit[1][2] = '|', digit[2][2] = '|';

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%c", digit[i][j]);
		}
		printf("\n");
	}
	return 0;
}