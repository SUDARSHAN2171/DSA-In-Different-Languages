#include <stdio.h>

int getMax(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void countingSort(int array[], int size, int exp) {
    int output[size]; 
    int count[10] = {0};

    for (int i = 0; i < size; i++) {
        count[(array[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; i++) {
        array[i] = output[i];
    }
}

void radixSort(int array[], int size) {
    int max = getMax(array, size);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(array, size, exp);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements in the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    radixSort(array, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
