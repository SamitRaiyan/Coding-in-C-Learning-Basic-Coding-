#include <stdio.h>

int findMinimum(int array[], int size) {
    int minimum = array[0];  // Assume the first element is the minimum

    for (int i = 1; i < size; i++) {
        if (array[i] < minimum) {
            minimum = array[i];  // Update the minimum if a smaller element is found
        }
    }

    return minimum;
}
int main() {
    int array[] = {9, 2, 5, 1, 7, 3};
    int size = sizeof(array) / sizeof(array[0]);

    int minimum = findMinimum(array, size);
    printf("The minimum number is: %d\n", minimum);

    return 0;
}
