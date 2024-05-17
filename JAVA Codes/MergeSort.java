import java.util.Scanner;

public class MergeSort {

    public static void merge(int[] array, int start, int mid, int end) {
        int size1 = mid - start + 1;
        int size2 = end - mid;

        int[] array1 = new int[size1];
        int[] array2 = new int[size2];

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

    public static void mergeSort(int[] array, int start, int end) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergeSort(array, start, mid);
            mergeSort(array, mid + 1, end);
            merge(array, start, mid, end);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        int[] array = new int[size];
        System.out.println("Enter the elements in the array: ");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
        }

        mergeSort(array, 0, size - 1);

        System.out.println("Sorted array: ");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }
}
