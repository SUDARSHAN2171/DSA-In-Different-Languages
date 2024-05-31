import java.util.Scanner;

class Stack {
    private int[] elements;
    private int size;
    private int capacity;

    public Stack(int capacity) {
        this.capacity = capacity;
        this.elements = new int[capacity];
        this.size = 0;
    }

    // Push: Adds an element to the top of the stack
    public void push(int data) {
        if (size == capacity) {
            // Resize the stack if it is full
            capacity *= 2;
            int[] newElements = new int[capacity];
            System.arraycopy(elements, 0, newElements, 0, size);
            elements = newElements;
        }
        elements[size++] = data;
    }

    // Pop: Removes and returns the element at the top of the stack
    public int pop() {
        if (size == 0) {
            System.out.println("Stack is empty. Cannot pop.");
            return -1; // Indicating an error
        }
        return elements[--size];
    }

    // Peek: Returns the element at the top of the stack without removing it
    public int peek() {
        if (size == 0) {
            System.out.println("Stack is empty. Cannot peek.");
            return -1; // Indicating an error
        }
        return elements[size - 1];
    }

    // Size: Returns the number of elements in the stack
    public int size() {
        return size;
    }

    // IsEmpty: Checks if the stack is empty
    public boolean isEmpty() {
        return size == 0;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Stack stack = new Stack(2); // Initial capacity of 2

        int choice, value;

        do {
            System.out.println("\nStack Operations Menu:");
            System.out.println("1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Peek");
            System.out.println("4. Size");
            System.out.println("5. Is Empty");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter value to push: ");
                    value = scanner.nextInt();
                    stack.push(value);
                    System.out.println("Pushed " + value + " onto the stack.");
                    break;
                case 2:
                    value = stack.pop();
                    if (value != -1) {
                        System.out.println("Popped " + value + " from the stack.");
                    }
                    break;
                case 3:
                    value = stack.peek();
                    if (value != -1) {
                        System.out.println("Top element is " + value + ".");
                    }
                    break;
                case 4:
                    System.out.println("Current stack size: " + stack.size());
                    break;
                case 5:
                    System.out.println("Is stack empty? " + (stack.isEmpty() ? "Yes" : "No"));
                    break;
                case 6:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 6);

        scanner.close();
    }
}
