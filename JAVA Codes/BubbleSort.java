import java.util.*;

public class BubbleSort {
    public static void bubbleSort(int array[], int size) {
        int counter = 1;
        while (counter < size) {
            for (int i = 0; i < size - counter; i++) {
                if (array[i] > array[i + 1]) {
                    int temp;
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                }
            }
            counter++;
        }
        System.out.println("Sorted Array : ");
        for (int i = 0; i < size; i++) {
            System.out.print(array[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.println("Enter the Elements in array : ");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
        bubbleSort(array, size);
    }
}
