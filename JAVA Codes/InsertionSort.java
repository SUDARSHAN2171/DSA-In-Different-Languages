import java.util.*;

public class InsertionSort {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.println("Enter the element in array : ");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
        insertionSort(array, size);
    }

    public static void insertionSort(int array[], int size) {
        for (int i = 1; i < size; i++) {
            int j = i - 1;
            int current = array[i];
            while (j >= 0 && current < array[j]) {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = current;
        }
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }

}
