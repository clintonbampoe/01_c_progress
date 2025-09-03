#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// fn declaration
// fn01
void generate_random_walk(char walk[][10]);
// fn02
bool is_valid(int, int, bool [10][10]);
// fn03
void print_array(char walk[][10], int, int);
// fn04
void swap(int*, int*);
// fn05
void shuffle(int[], int[], int);

// macro def
#define ROW_WIDTH 10
#define COL_WIDTH 10


// fn00 main
int main(void) {
	// sample array
	char walk[ROW_WIDTH][COL_WIDTH] = { 0 };

	// seed for rng
	srand(time(NULL));

	generate_random_walk(walk);

	print_array(walk, ROW_WIDTH, COL_WIDTH);

	return 0;
}


// fn01 generate random walk
void generate_random_walk(char walk[][10]) {
	// init all array elements to '.'
	for (int i = 0; i < ROW_WIDTH; i++) {
		for (int j = 0; j < COL_WIDTH; j++) {
			walk[i][j] = '.';
		}
	}


	// init occupany checker
	bool is_visited[ROW_WIDTH][COL_WIDTH] = { false };
	// init all elements to false
	for (int i = 0; i < ROW_WIDTH; i++) {
		for (int j = 0; j < COL_WIDTH; j++) {
			is_visited[i][j] = false;
		}
	}


	// init current position as first grid and assign letter A
	char letter = 'A';
	int x = 0;
	int y = 0;
	walk[x][y] = letter;
	is_visited[x][y] = true;


	// directional array
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	while (letter < 'Z') {
		
		// movement
		bool moved = false;

		// shuffle directional arrays
		shuffle(dx, dy, 4);

		for (int i = 0; i < 4; i++) {
			
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (is_valid(nx, ny, is_visited)) {
				x = nx;
				y = ny;
				is_visited[x][y] = true;
				walk[x][y] = ++letter;
				moved = true;
				break;
			}
		}
		if (!moved) {
			return;
		}
	}
}


// fn02 is valid function
bool is_valid(int x, int y, bool is_visited[10][10]) {
	if (((x < 0 || x >= ROW_WIDTH) || (y < 0 || y >= COL_WIDTH))) {
		return false;
	}
	else if (is_visited[x][y]) {
		return false;
	}
	else {
		return true;
	}
}


// fn03 print array function
void print_array(char walk[][10], const int row, const int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}


// fn04 swap function
void swap(int* x, int* y) {
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}


// fn05 shuffle function (Fisher-Yates)
void shuffle(int dx[], int dy[], int size) {
	int i, j;

	for (i = (size - 1); i > 0; i--) {
		j = rand() % (i + 1);

		swap(&dx[i], &dx[j]);
		swap(&dy[i], &dy[j]);
	}

}