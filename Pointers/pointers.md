# Pointers 

## introduction to pointer 
->A pointer is just another variable. But instead of storing a normal value like 42 or "Hello", it stores a memory address

To use pointers, you only need to master two magical symbols:

### 1. The Address-of Operator (&)
Think of & as asking the question: "Where do you live?"
If you have a variable x, putting & in front of it (&x) gives you the memory address of where x is stored.

### 2. The Dereference Operator (*)
Think of * as the command: "Go to this address and look inside."
If you have a pointer ptr that holds an address, putting * in front of it (*ptr) travels to that address and gives you the actual value stored there.
