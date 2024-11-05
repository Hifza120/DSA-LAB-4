#include"Stack.h"
template<typename T>
class MyStack : public Stack<T> {
public:
	MyStack(int   size) :Stack<T>(size) {}
	void push(T value) {
		if (Stack<T>::maxSize == Stack<T>::currentSize) {
			cout << "STACK IS FULL " << endl;
		}
		else {
			Stack<T>::arr[Stack<T>::currentSize] = value;
			Stack<T>::currentSize++;
		}
	}
	T pop() {
		if (Stack<T>::currentSize == 0) {
			cout << "Stack is empty";
			return T();
		}
		return  Stack<T>::arr[--Stack<T>::currentSize];
	}
	T top() const {
		if (Stack<T>::currentSize == 0) {
			cout << "Stack is empty";
			return T();
		}
		return  Stack<T>::arr[Stack<T>::currentSize-1];
	}
	bool isEmpty() const {
		if (Stack<T>::currentSize == 0) {
			return true;
		}
		return  false;
	}
	bool isFull() const {
		if (Stack<T>::maxSize == Stack<T>::currentSize) {
			return true;
		}
		return false;
	}
	void display()const {
		for (int i = 0; i < Stack<T>::currentSize; i++) {
			cout << Stack<T>::arr[i] << endl;
		}
	}
	int Size()const {
		return Stack<T>::currentSize;
	}
	~MyStack() {

	}
};