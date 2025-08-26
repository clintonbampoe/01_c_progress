// fn declaration
int largest_element(const int [], int);
float average(const int [], int);
int num_pos_element(const int [], int);

// fn00 main
int main(void) {

}

// fn01 LARGEST ELEMENT
// first parameter made constant
int largest_element(const int arr[], int size) {
    int largest = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// fn02 AVERAGE
float average(const int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (sum / size);
}

// fn03 POSITIVE ELEMENT
int num_pos_element(const int arr[], int size) {
    int num_pos_el = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            num_pos_el++;
        }
    }
    return num_pos_el;
}