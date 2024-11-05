#include"myStack.h"

int main() {
	MyStack<int> stack(5);
	int choice, value;

	do {
		cout << "1. Push\n2. Pop\n3. Top\n4. Is Empty?\n5. Is Full?\n6. Display\n7. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1) {
			cout << "Enter an integer: ";
			cin >> value;
			stack.push(value);
		}
		else if (choice == 2) {
			if (!stack.isEmpty()) {
				cout << "Popped: " << stack.pop() << endl;
			}
			else {
				cout << "Stack is empty!" << endl;
			}
		}
		else if (choice == 3) {
			if (!stack.isEmpty()) {
				cout << "Top: " << stack.top() << endl;
			}
			else {
				cout << "Stack is empty!" << endl;
			}
		}
		else if (choice == 4) {
			cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
		}
		else if (choice == 5) {
			cout << (stack.isFull() ? "Stack is full." : "Stack is not full.") << endl;
		}
		else if (choice == 6) {
			stack.display();
		}
		else if (choice == 7) {
			cout << "Exiting..." << endl;
		}
		else {
			cout << "Invalid choice. Please try again." << endl;
		}
	} while (choice != 7);

	return 0;
}