# Stack-Templated
## About
This program is meant to be used as a template and example for creating templated classes. This program includes a generic stack class. The stack class can be instantiated as any kind of data types including other classes because it includes a template. For example, to instantiate a stack of strings, it would be declared in main like Stack<strings> strStack. The stack data structure is a First in Last Out structure which meets the requirements of a standard stack found in the standard libraries. This stack class uses an array instead of a linked list which means the size of the stack is not dynamic and must be set using the SIZE constant in the class file. The default size of the stack is set to 5.
## Output
```
Enter 5 integers
Enter an Integer: 1
Enter an Integer: 2
Enter an Integer: 3
Enter an Integer: 4
Enter an Integer: 5

Popping intStack...
5 popped
4 popped
3 popped
2 popped
1 popped

Enter 5 strings
Enter a String: cam
Enter a String: chloe
Enter a String: eric
Enter a String: jen
Enter a String: dan'

Popping strStack...
dan' popped
jen popped
eric popped
chloe popped
cam popped
```
## Methods
- Constructor
  - The stack class constructor initializes the top int member to -1 to set the stack as empty
- Destructor
  - Default Destructor
- makeEmpty
  - This method will assign the 'top' member to -1, like the constructor, to show that the stack is empty.
- isEmpty
  - This method checks if the stack is empty using 'top' and returns a boolean value.
- isFull
  - This method checks if the stack is full using 'top' and returns a boolean value.
- Push
  - This method increments 'top' to update the "top" of the stack and "pushes" a new item onto the stack.
- Pop
  - This method will set the parameter to the top of the stack and decrement the 'top' counter to update the "top" of the stack.



