#include <stdio.h>

void Merge(int array[], int start, int mid, int end) {
    int size1 = mid - start + 1;
    int size2 = end - mid;

    int array1[size1];
    int array2[size2];

    for (int i = 0; i < size1; i++) {
        array1[i] = array[start + i];
    }
    for (int i = 0; i < size2; i++) {
        array2[i] = array[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;

    while (i < size1 && j < size2) {
        if (array1[i] <= array2[j]) {
            array[k] = array1[i];
            i++;
        } else {
            array[k] = array2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        array[k] = array1[i];
        i++;
        k++;
    }

    while (j < size2) {
        array[k] = array2[j];
        j++;
        k++;
    }
}

void MergeSort(int array[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        MergeSort(array, start, mid);
        MergeSort(array, mid + 1, end);
        Merge(array, start, mid, end);
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

    MergeSort(array, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
