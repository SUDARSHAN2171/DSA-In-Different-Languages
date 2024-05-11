import java.util.*;

public class SelectionSort {
    public static void selectionSort(int array[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[j] < array[i]) {
                    int temp;
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
        System.out.println("Sort Array : ");
        for (int i = 0; i < size; i++) {
            System.out.println(array[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.println("Enter the element in array : ");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
        selectionSort(array, size);
    }
}