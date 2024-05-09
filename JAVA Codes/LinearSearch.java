import java.util.*;

public class LinearSearch {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.print("Enter the elements in array : ");
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
        System.out.print("Enter the Element to be found : ");
        int findElement = sc.nextInt();
        linearSearch(array, size, findElement);

    }

    public static void linearSearch(int array[], int size, int findElement) {
        int z = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] == findElement) {
                z = z + 1;
                System.out.println("Element found at position : " + i);
            }
        }
        if (z == 0) {
            System.out.println("Element not found");
        }
    }

}