#pragma once
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

template <class T>
class Stack
{
private:
	T stackItems[SIZE];
	int top;

public:
	Stack() { top = -1; }
	~Stack() {}
	void makeEmpty() { top = -1; }
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == SIZE - 1; }
	void push(T item) { top++; stackItems[top] = item; }
	void pop(T& item) { item = stackItems[top]; top--; }
};

