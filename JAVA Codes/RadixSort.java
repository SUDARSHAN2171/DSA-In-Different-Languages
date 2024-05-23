import java.util.Scanner;

public class RadixSort {

    public static int getMax(int array[], int size) {
        int max = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }

    public static void countingSort(int array[], int size, int exp) {
        int output[] = new int[size];
        int count[] = new int[10];

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

    public static void radixSort(int array[], int size) {
        int max = getMax(array, size);

        for (int exp = 1; max / exp > 0; exp *= 10) {
            countingSort(array, size, exp);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        int array[] = new int[size];
        System.out.print("Enter the elements in the array: ");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
        }

        radixSort(array, size);

        System.out.print("Sorted array: ");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
        scanner.close();
    }
}
