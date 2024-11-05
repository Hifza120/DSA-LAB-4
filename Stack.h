#include<iostream>
using namespace std;
template<typename T>
class Stack {
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	Stack(int Size) :maxSize(Size) {
		arr = new T[maxSize];
		currentSize = 0;
	}
	virtual void push(T value) = 0;
	virtual T pop() = 0;
	virtual T top() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool isFull() const = 0;
	virtual ~Stack() {
		delete[] arr;
		arr = nullptr;
	}

};