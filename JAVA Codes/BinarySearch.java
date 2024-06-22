import java.util.*;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array size : ");
        int size = sc.nextInt();
        System.out.println("Enter the element in array : ");
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = sc.nextInt();
        }
        System.out.println("Enter the element to be found : ");
        int findElement = sc.nextInt();
        bs(array, size, findElement);
    }

    public static void bs(int array[] , int size, int findElement) {
        int start = 0;
        int end = size - 1;
        int z = 0;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (array[mid] == findElement) {
                z = z + 1;
                System.out.println("Element Found at Position : " + mid);
                break;
            } else if (array[mid] > findElement) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        if (z == 0) {
            System.out.println("Element not found");
        }

    }
}
