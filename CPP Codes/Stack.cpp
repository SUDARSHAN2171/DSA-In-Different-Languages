#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> elements;

public:
    // Push: Adds an element to the top of the stack
    void push(int data) {
        elements.push_back(data);
    }

    // Pop: Removes and returns the element at the top of the stack
    int pop() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1; // Indicating an error
        }
        int topElement = elements.back();
        elements.pop_back();
        return topElement;
    }

    // Peek: Returns the element at the top of the stack without removing it
    int peek() {
        if (elements.empty()) {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1; // Indicating an error
        }
        return elements.back();
    }

    // Size: Returns the number of elements in the stack
    int size() const {
        return elements.size();
    }

    // IsEmpty: Checks if the stack is empty
    bool isEmpty() const {
        return elements.empty();
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Size\n";
        cout << "5. Is Empty\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                cout << "Pushed " << value << " onto the stack.\n";
                break;
            case 2:
                value = stack.pop();
                if (value != -1) {
                    cout << "Popped " << value << " from the stack.\n";
                }
                break;
            case 3:
                value = stack.peek();
                if (value != -1) {
                    cout << "Top element is " << value << ".\n";
                }
                break;
            case 4:
                cout << "Current stack size: " << stack.size() << endl;
                break;
            case 5:
                cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
