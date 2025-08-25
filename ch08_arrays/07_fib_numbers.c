// Program for fibonacci sequence

#define START_PNT 2
int main(void) {
    long long fib_numbers[40] = {[0] = 0, [1] = 1};
    for (int i = START_PNT; i < 40; i++) {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }
}