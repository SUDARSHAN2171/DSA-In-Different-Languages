#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int>& array, int size, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < size && array[l] > array[largest])
        largest = l;

    if (r < size && array[r] > array[largest])
        largest = r;

    if (largest != i) {
        swap(array[i], array[largest]);
        heapify(array, size, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    vector<int> array(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i)
        cin >> array[i];

    cout << "Original array: ";
    for (int i : array)
        cout << i << " ";
    cout << endl;

    heapSort(array);

    cout << "Sorted array: ";
    for (int i : array)
        cout << i << " ";
    cout << endl;

    return 0;
}
