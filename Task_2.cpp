#include"myStack.h"
template<typename T>
MyStack<T> reverse( MyStack<T>& Original) {
	int size = Original.Size();
	T* arr = new T[size];
	for (int i = size - 1; i >= 0; i--) {
		arr[i] = Original.pop();
	}
	for (int i = 0; i < size; i++) {
		Original.push(arr[i]);
	}
	MyStack<T> reverseStack(size);
	for (int i =size-1; i >=0; i--) {
		reverseStack.push(arr[i]);
	}
	return reverseStack;
}
template<typename T>
void   display(const MyStack<T>& Original, const MyStack<T>& reverseStack) {
	cout << " Original Stack : " << endl;
	Original.display();
	cout << " Reverse Stack : " << endl;
	reverseStack.display();
}
int main() {

	MyStack<string> S(3);
	cout << "1.Push Books " << endl;
	cout << "2.Reverse Books " << endl;
	cout << "3.Display Stacks  " << endl;
	S.push("BOOK A");
	S.push("BOOK B");
	S.push("BOOK C");
	MyStack<string> S1 = reverse(S);
	display(S, S1);

	return 0;
}