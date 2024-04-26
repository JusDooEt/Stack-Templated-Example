
#include "Stack.h"

int main()
{
	int item;

	Stack<int> intStack;
	Stack<string> strStack;
	int num;
	string str;

	cout << "Enter 5 integers\n";
	while (!intStack.isFull())
	{
		cout << "Enter an Integer: ";
		cin >> num;
		intStack.push(num);
	}
	cin.ignore();

	cout << "\nPopping intStack...\n";
	while (!intStack.isEmpty())
	{
		intStack.pop(num);
		cout << num << " popped\n";
	}

	cout << "\nEnter 5 strings\n";
	while (!strStack.isFull())
	{
		cout << "Enter a String: ";
		getline(cin, str);
		strStack.push(str);
	}

	cout << "\nPopping strStack...\n";
	while (!strStack.isEmpty())
	{
		strStack.pop(str);
		cout << str << " popped\n";
	}

	return 0;
}