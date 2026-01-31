//Stack is a linear data structure  that follows LIFO(Last In, First Out)
//The element added last is removed first
// Main Operations:
//Push - add an element to the top
//Pop - remove the top element
//Peek - view the top element

//Stack Implementation

//Stack using Array
// Fixed size
// Faster access
// Overflow possible

// Stack using Linked List
// Dynamic size
// No overflow (until memory full)
// Extra memory for pointer


// Applications of Stack
// Function calls (Call Stack)
// Undo / Redo
// Parenthesis checking
// Infix → Postfix conversion
// Postfix expression evaluation
// Backtracking (DFS)

struct Stack {
    int size;
    int top;
    int *arr;
};
//This structure defines what a stack looks like inn memory
